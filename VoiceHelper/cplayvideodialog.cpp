#include "cplayvideodialog.h"
#include "ui_cplayvideodialog.h"
#include <QFileDialog>
CPlayVideoDialog::CPlayVideoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CPlayVideoDialog)
{
    ui->setupUi(this);
    Init();
}

CPlayVideoDialog::~CPlayVideoDialog()
{
    delete ui;
}

void CPlayVideoDialog::SetPlayRec(QString strFile)
{
    qDebug()<<"strFile:"<<strFile;
    m_strPlayFile = strFile;
    ui->lineEdit->setText(m_strPlayFile);
    startPlay();
}

void CPlayVideoDialog::on_pushButton_clicked()
{
    startPlay();
}

void CPlayVideoDialog::Init()
{
    player = new QMediaPlayer;  //用于解析视频流的媒体播放器
    videowidget = new QVideoWidget;  //用于播放视频
    layout = new QVBoxLayout;  //用于指定视频播放的位置

   //打开音视频流文件
    videowidget->resize(ui->label->size());  //把视频输出图像的大小重新调整为label的大小
    //指定视频播放的位置
    layout->addWidget(videowidget);
    ui->label->setLayout(layout);

    player->setVideoOutput(videowidget);  //设置视频输出附加到媒体播放器
}

void CPlayVideoDialog::startPlay()
{
    player->setMedia(QUrl::fromLocalFile(m_strPlayFile));
    player->play();  //开始播放视频
}
