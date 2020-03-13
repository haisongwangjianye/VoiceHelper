#include "chttphelper.h"
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QEventLoop>
#include <QTextCodec>
#include <QFileInfo>
#include <QMessageBox>
#include <QUrl>
#include <QDir>
#include <QString>

CHttpHelper::CHttpHelper()
{
    m_strContentType = "application/json";
}

QString CHttpHelper::HttpGet(const QString url)
{
    QNetworkAccessManager qnam;
    const QUrl aurl( url );
    QNetworkRequest qnr( aurl );
    qnr.setRawHeader("Content-Type",m_strContentType.toLatin1());
    QNetworkReply *reply = qnam.get( qnr );

    QEventLoop eventloop;
    connect( reply,SIGNAL(finished()),&eventloop,SLOT(quit()));
    eventloop.exec( QEventLoop::ExcludeUserInputEvents);

    QTextCodec *codec = QTextCodec::codecForName("utf8");
    QString replyData = codec->toUnicode( reply->readAll() );

    reply->deleteLater();
    reply = 0;

    return replyData;
}

QString CHttpHelper::HttpPost(const QString url, const QString data)
{
    QNetworkAccessManager qnam;
    const QUrl aurl( url );
    QNetworkRequest qnr( aurl );
    //qnr.setRawHeader("Content-Type",m_strContentType);
    qnr.setHeader(QNetworkRequest::ContentTypeHeader
                      , m_strContentType);
    QNetworkReply *reply = qnam.post( qnr, data.toLocal8Bit() );

    QEventLoop eventloop;
    connect( reply,SIGNAL(finished()),&eventloop,SLOT(quit()));
    eventloop.exec( QEventLoop::ExcludeUserInputEvents);

    QTextCodec *codec = QTextCodec::codecForName("utf8");
    QString replyData = codec->toUnicode( reply->readAll() );

    reply->deleteLater();
    reply = 0;

    return replyData;
}

void CHttpHelper::SetContentType(QString strContentType)
{
    m_strContentType = strContentType;
}

bool CHttpHelper::HttpDownload_Get(const QString strUrl,QString strPath)
{
    if (strUrl.isEmpty())
    {
        QString strText = QString::fromLocal8Bit("请指定需要下载的URL");
        QMessageBox message(QMessageBox::NoIcon, "错误",strText);
        message.exec();
        return false;
    }

    QUrl newUrl = QUrl::fromUserInput(strUrl);
    if (!newUrl.isValid())
    {
        QString strText = QString("无效URL: %1 \n 错误信息: %2").arg(strUrl, newUrl.errorString());
        QMessageBox message(QMessageBox::NoIcon, "错误",strText);
        message.exec();
        return false;
    }

    QString fullFileName = strPath;

    if (QFile::exists(fullFileName))
        QFile::remove(fullFileName);

    m_pDownloadedFile =new QFile(fullFileName);  //创建临时文件
    if (!m_pDownloadedFile->open(QIODevice::WriteOnly))
    {
        QMessageBox message(QMessageBox::NoIcon, "错误", "临时文件打开错误");
        message.exec();
        return false;
    }

    m_pReply = m_NetworkManager.get(QNetworkRequest(newUrl));

    //下载完响应finished信号
    connect(m_pReply, SIGNAL(finished()), this, SLOT(on_finished()));
    connect(m_pReply, SIGNAL(error(QNetworkReply::NetworkError))
            , this, SLOT(on_signalerror(QNetworkReply::NetworkError)));

    //缓冲区有新的下载数据时，响应readyRead信号
    connect(m_pReply, SIGNAL(readyRead()), this, SLOT(on_readyRead()));
    return true;
}

bool CHttpHelper::HttpDownload_Post(const QString strUrl, const QString strData,QString strPath)
{
    if (strUrl.isEmpty())
    {
        QString strText = QString::fromLocal8Bit("请指定需要下载的URL");
        QMessageBox message(QMessageBox::NoIcon, "错误",strText);
        message.exec();
        return false;
    }

    QUrl newUrl = QUrl::fromUserInput(strUrl);
    if (!newUrl.isValid())
    {
        QString strText = QString("无效URL: %1 \n 错误信息: %2").arg(strUrl, newUrl.errorString());
        QMessageBox message(QMessageBox::NoIcon, "错误",strText);
        message.exec();
        return false;
    }

    QString fullFileName = strPath;

    if (QFile::exists(fullFileName))
        QFile::remove(fullFileName);

    m_pDownloadedFile =new QFile(fullFileName);  //创建临时文件
    if (!m_pDownloadedFile->open(QIODevice::WriteOnly))
    {
        QMessageBox message(QMessageBox::NoIcon, "错误", "临时文件打开错误");
        message.exec();
        return false;
    }

    m_pReply = m_NetworkManager.post(QNetworkRequest(newUrl),strData.toLatin1());

    //下载完响应finished信号
    connect(m_pReply, SIGNAL(finished()), this, SLOT(on_finished()));

    //缓冲区有新的下载数据时，响应readyRead信号
    connect(m_pReply, SIGNAL(readyRead()), this, SLOT(on_readyRead()));
    return true;
}

//网络响应结束
void CHttpHelper::on_finished()
{
    QFileInfo fileInfo;
    QString strFileName = m_pDownloadedFile->fileName();
    fileInfo.setFile(strFileName);

    m_pDownloadedFile->close();
    delete m_pDownloadedFile;
    m_pDownloadedFile = Q_NULLPTR;

    m_pReply->deleteLater();
    m_pReply = Q_NULLPTR;

    emit signalfinished(strFileName);
}

void CHttpHelper::on_signalerror(QNetworkReply::NetworkError error)
{
    emit signalerror(error);
}

//读取缓冲区下载的数据
void CHttpHelper::on_readyRead()
{
    m_pDownloadedFile->write(m_pReply->readAll());
}

