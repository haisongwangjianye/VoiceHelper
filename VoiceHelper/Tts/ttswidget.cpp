#include "ttswidget.h"
#include "ui_ttswidget.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QDomDocument>
#include <QStandardItem>
#include <sys/stat.h>
#include <QDebug>
#include <QByteArray>
#include <QUrlQuery>
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonValue>
#include <QBuffer>
#include <QTextCodec>
#include <QDir>
#include <QDesktopServices>
#include <QFileDialog>
#include <QPainter>

using namespace std;
#pragma execution_character_set("utf-8")

TtsWidget::TtsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TtsWidget)
{
    ui->setupUi(this);
    setFixedSize(1170,600);
    m_bIsAllTts = false;
    m_strAppID = "14537614";
    m_strAPIKey="53fw6KrAQM6kUqxiCU2iTDj3";
    m_strSecretKey="A3dZCgvAiAYBKleGAIfcl2TaFDy8Z3N4";
    m_player=new QMediaPlayer;
    m_pHttpHelper = new CHttpHelper;

    InitControl();
    GetToken();

    //下载完响应finished信号
    connect(m_pHttpHelper, SIGNAL(signalfinished(QString)), this, SLOT(on_finished(QString)));
    connect(m_pHttpHelper, SIGNAL(signalerror(QNetworkReply::NetworkError))
            , this, SLOT(on_error(QNetworkReply::NetworkError)));

}

TtsWidget::~TtsWidget()
{
    delete ui;
}

void TtsWidget::paintEvent(QPaintEvent *)
{
    QString strSkin_name("./Config/Res/18.jpg");
    QPainter painter(this);
    painter.drawPixmap(rect(), QPixmap(strSkin_name));
}


void TtsWidget::on_m_pBtnTts_clicked()
{
    QString strName = ui->outMp3NamelineEdit->text();
    if(strName.isEmpty())
    {
        QMessageBox message(QMessageBox::NoIcon, "Title", "请选择生成文件名");
        message.exec();
        return ;
    }
    m_strOutPath =strName;
    ui->labelTip->setText("");

    QString strText = ui->WilltextEdit->toPlainText();
    QString strFileName= ui->outMp3NamelineEdit->text();
    Tts(strText,strFileName);
}


QString TtsWidget::AnalyticalTokenRes(QString strRes)
{
    QString strRet;
    QJsonParseError jsonError;
    QJsonDocument doucment = QJsonDocument::fromJson(strRes.toLatin1(), &jsonError);
    if (jsonError.error != QJsonParseError::NoError) {
        qDebug() << QStringLiteral("解析Json失败");
        return false;
    }

    // 解析Json
    if (doucment.isObject())
    {
        QJsonObject obj = doucment.object();
        QJsonValue value;
        if (obj.contains("access_token")) {
            value = obj.take("access_token");
            if (value.isString()) {
                QString data = value.toString();
                strRet = data;
                m_strToken = data;
                qDebug()<<"strToken:"<<m_strToken;
            }
        }
    }

    return strRet;

}

bool TtsWidget::Tts(QString strText,QString strFileName)
{
    QString strUrl = "http://tsn.baidu.com/text2audio";

    QUrl url(strUrl);
    // key-value 对
    QUrlQuery query;
    query.addQueryItem("tex", strText);
    query.addQueryItem("tok", m_strToken);
    query.addQueryItem("cuid", "12345678");
    query.addQueryItem("ctp", "1");
    query.addQueryItem("lan", "zh");


    int iYushu = ui->m_YuShuCommBox->currentIndex();
    int iYinDiao = ui->m_YinDiaoComboBox->currentIndex();
    int iYinLiang = ui->m_YinLiangComboBox->currentIndex();

    QString strYushu = QString("%1").arg(iYushu);
    QString strYinDiao = QString("%1").arg(iYinDiao);
    QString strYinLiang = QString("%1").arg(iYinLiang);
    query.addQueryItem("spd", strYushu);//语速
    query.addQueryItem("pit", strYinDiao);//音调
    query.addQueryItem("vol", strYinLiang);//音量
    QString strVoice = GetVoiceIndex();
    query.addQueryItem("per", strVoice);//度小宇=1，度小美=0，度逍遥=3，度丫丫=4
    //度博文=106，度小童=110，度小萌=111，度米朵=103，度小娇=5
    query.addQueryItem("aue", "zh");//3为mp3格式(默认)； 4为pcm-16k；5为pcm-8k；6为wav（内容同pcm-16k）;
    url.setQuery(query);
    qDebug()<<url.toString();

    m_pHttpHelper->HttpDownload_Get(url.toString(),strFileName);

    return true;
}

bool TtsWidget::OnLinePlay(QString strText)
{
    QByteArray url="http://tsn.baidu.com/text2audio?";
    QString strParam = QString("&lan=zh&cuid=12345678&ctp=1&tok=%1&pit=8&per=3"
                               ).arg(m_strToken.toLatin1().data());
    url.append(strParam);
    url.append("&tex=");
    url.append(QUrl::toPercentEncoding(strText));
    qDebug()<<url;
    m_player->setMedia(QUrl::fromLocalFile(url));
    m_player->play();
    return true;
}


void TtsWidget::slotRowDoubleClicked(const QModelIndex index)
{
    //通过Model获取一行
    if (index.isValid())
    {
        qDebug() <<"row = "<<index.row()<<"column = "<<index.column();
        QStandardItem* aItem = m_Exmpmodel->itemFromIndex(index);
        if(0 == index.column())
        {

            ui->WilltextEdit->setText(aItem->text());
        }
        else if(1 == index.column())
        {
            QString strTemp = QString("/%1/%2").arg(m_strMp3OutDir).arg(aItem->text());
            ui->outMp3NamelineEdit->setText(strTemp);
        }
    }
}

bool TtsWidget::AnalysisXml()
{
    if(m_strXmlFileName.isEmpty())
    {
        return  false;
    }
    QFile file( m_strXmlFileName );
    if( !file.open(QFile::ReadOnly | QFile::Text) )
    {
        qDebug()<<file.errorString();
        return false;
    }

    QTextStream stream(&file);
    QTextCodec *codec=QTextCodec::codecForName("utf-8");
    stream.setCodec(codec);

    QString con = stream.readAll();

    QDomDocument    document;

    document.setContent(con);

    if( document.isNull() )
    {
        qDebug()<<"document is null";
        return false;
    }

    QDomElement root = document.documentElement();
    QDomElement station1 = root.firstChildElement();
    qDebug()<<station1.tagName();

    QDomElement station = station1.firstChildElement();
    qDebug()<<station.tagName();
    while(!station.isNull())
    {
        ST_VOICE_XML stXmlItem;
        if(station.hasAttribute("content"))
            stXmlItem.strText = station.attributeNode("content").value();

        if(station.hasAttribute("rcName"))
            stXmlItem.strMp3Name = station.attributeNode("rcName").value();

        m_stXmVectorl.push_back(stXmlItem);
        station = station.nextSiblingElement();
    }
    InitTable();
}

void TtsWidget::InitTable()
{
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionMode( QAbstractItemView::SingleSelection);
    m_Exmpmodel = new QStandardItemModel();
    QStringList labels = QObject::trUtf8("content,mp3").simplified().split(",");
    m_Exmpmodel->setHorizontalHeaderLabels(labels);
    InitTableContent();
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//所有列都扩展自适应宽度，填充充满整个屏幕宽度
    ui->tableView->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);//对第0列单独设置固定宽度
    ui->tableView->setColumnWidth(0,600);
}

void TtsWidget::InitTableContent()
{
    std::vector<ST_VOICE_XML>::iterator itor = m_stXmVectorl.begin();
    for(int i = 0;itor != m_stXmVectorl.end();itor++,i++)
    {
        ST_VOICE_XML stTemp = *itor;
        QStandardItem* item = new QStandardItem(QString("%1").arg(stTemp.strText));
        m_Exmpmodel->setItem(i,0,item);
        QStandardItem* item2 = new QStandardItem(QString("%1").arg(stTemp.strMp3Name));
        m_Exmpmodel->setItem(i,1,item2);
    }
    ui->tableView->setModel(m_Exmpmodel);
}

void TtsWidget::InitControl()
{
    m_strMp3OutDir = "D://";
    ui->outMp3NamelineEdit->setText("D://defalut.mp3");
    m_strOutPath = "D://defalut.mp3";
    //度小宇=1，度小美=0，度逍遥=3，度丫丫=4
        //度博文=106，度小童=110，度小萌=111，度米朵=103，度小娇=5
    ui->m_VoiceSetcomboBox->addItem("小美");
    ui->m_VoiceSetcomboBox->addItem("小宇");
    ui->m_VoiceSetcomboBox->addItem("逍遥");
    ui->m_VoiceSetcomboBox->addItem("丫丫");
    ui->m_VoiceSetcomboBox->addItem("博文");
    ui->m_VoiceSetcomboBox->addItem("小娇");
    ui->m_VoiceSetcomboBox->addItem("小童");
    ui->m_VoiceSetcomboBox->addItem("小萌");
    ui->m_VoiceSetcomboBox->addItem("米朵");

     ui->m_VoiceSetcomboBox->setCurrentIndex(3);
    for(int i=0;i<15;i++)
    {
        QString strTemp = QString("%1").arg(i);
        ui->m_YinDiaoComboBox->addItem(strTemp);
        ui->m_YuShuCommBox->addItem(strTemp);
        ui->m_YinLiangComboBox->addItem(strTemp);
    }

    ui->m_YinDiaoComboBox->setCurrentIndex(5);
    ui->m_YuShuCommBox->setCurrentIndex(5);
    ui->m_YinLiangComboBox->setCurrentIndex(5);

    ui->tableView->setMouseTracking(true);
    connect(ui->tableView, SIGNAL(doubleClicked(const QModelIndex &)), this, SLOT(slotRowDoubleClicked(const QModelIndex &)));

}

QString TtsWidget::GetVoiceIndex()
{
    //度小宇=1，度小美=0，度逍遥=3，度丫丫=4

    QString strRet="5";
    QString strVoice = ui->m_VoiceSetcomboBox->currentText();
    if(strVoice == "小美")
    {
        strRet = "0";
    }
    if(strVoice == "小宇")
    {
        strRet = "1";
    }
    if(strVoice == "逍遥")
    {
        strRet = "3";
    }
    if(strVoice == "丫丫")
    {
        strRet = "0";
    }
    //度博文=106，度小童=110，度小萌=111，度米朵=103，度小娇=5
    if(strVoice == "小娇")
    {
        strRet = "5";
    }
    if(strVoice == "米朵")
    {
        strRet = "103";
    }
    if(strVoice == "小萌")
    {
        strRet = "111";
    }
    if(strVoice == "小童")
    {
        strRet = "110";
    }
    if(strVoice == "博文")
    {
        strRet = "106";
    }
    return strRet;
}

void TtsWidget::GetToken()
{
    QString strUrl = "https://openapi.baidu.com/oauth/2.0/token";

    QUrl url(strUrl);
    // key-value 对
    QUrlQuery query;
    query.addQueryItem("grant_type", "client_credentials");
    query.addQueryItem("client_id", m_strAPIKey);
    query.addQueryItem("client_secret", m_strSecretKey);
    url.setQuery(query);
    qDebug()<<url.toString();
    QString strRet = m_pHttpHelper->HttpGet(url.toString());
    AnalyticalTokenRes(strRet);
}
bool TtsWidget::getVectVoice(int iIndex,ST_VOICE_XML &stOut)
{
    bool bRet = false;
    if(iIndex < m_stXmVectorl.size())
    {
       stOut = m_stXmVectorl.at(iIndex);
       bRet = true;
    }
    return bRet;
}

void TtsWidget::on_m_pBtnBatchTts_clicked()
{
    m_bIsAllTts = true;
    m_iCurTtsIndex = 0;
    ST_VOICE_XML stTemp;
    bool bRet = getVectVoice(m_iCurTtsIndex,stTemp);
    if(bRet)
    {
        QString strFileName = QString("%1/%2").arg(m_strMp3OutDir).arg(stTemp.strMp3Name);
       Tts(stTemp.strText,strFileName);
    }
}


void TtsWidget::on_m_pBtnSelectOutDir_clicked()
{
    m_strMp3OutDir = QFileDialog::getExistingDirectory(this, tr("Open File"), "");
    if(!m_strMp3OutDir.isEmpty())
    {
        QString strTemp = QString("%1/defalut.mp3").arg(m_strMp3OutDir);
        ui->outMp3NamelineEdit->setText(strTemp);
    }
}

void TtsWidget::slots_CurrTtsInfo(QString strText, QString strMp3Name)
{
    ui->WilltextEdit->setText(strText);
    ui->outMp3NamelineEdit->setText(strMp3Name);
}

void TtsWidget::on_m_pBtnSelectFile_clicked()
{

    m_strXmlFileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "",
                                                    tr("*.xml"));
    if(m_strXmlFileName.isEmpty())
    {
        return ;
    }
    AnalysisXml();
}

//网络响应结束
void TtsWidget::on_finished(QString strFileName)
{
    QFile file(strFileName);
    int isize = file.size();
    qDebug()<<"file size:"<<isize;
    QString strShow;
    if(isize > 0)
    {
        strShow = strFileName + " 语音合成完成";
    }
    else
    {
        strShow = strFileName + " 语音合成失败";
    }

    ui->labelTip->setText(strShow);

    if(m_bIsAllTts)
    {
         m_iCurTtsIndex +=1;
        if(m_iCurTtsIndex >= m_stXmVectorl.size())
        {
            m_bIsAllTts = false;
        }
        else
        {

            ST_VOICE_XML stTemp;
            bool bRet = getVectVoice(m_iCurTtsIndex,stTemp);
            if(bRet)
            {
               QString strFileName = QString("%1/%2").arg(m_strMp3OutDir).arg(stTemp.strMp3Name);
               Tts(stTemp.strText,strFileName);
            }
        }

    }

}

void TtsWidget::on_error(QNetworkReply::NetworkError error)
{
    qDebug()<<"error:"<<error;
    ui->labelTip->setText("合成出错");
}

void TtsWidget::on_m_pBtnPlayVoice_clicked()
{
    m_strOutPath = ui->outMp3NamelineEdit->text();
    if(m_strOutPath.isEmpty())
    {
        if(m_strOutPath.isEmpty())
        {
            QMessageBox message(QMessageBox::NoIcon, "Title", "请选择播放的文件名");
            message.exec();
            return ;
        }
    }

    m_player->setMedia(QUrl::fromLocalFile(m_strOutPath));
    m_player->play();

}




void TtsWidget::on_pushButton_clicked()
{

}
