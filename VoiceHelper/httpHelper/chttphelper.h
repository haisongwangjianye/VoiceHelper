﻿#ifndef CHTTPHELPER_H
#define CHTTPHELPER_H
#include <QString>
#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QFile>
#include <QTimer>
class CHttpHelper:public QObject
{
    Q_OBJECT
public:
    CHttpHelper();
    QString HttpGet(const QString url);
    QString HttpPost( const QString url,const QString data );
    void SetContentType(QString strContentType);
    bool HttpDownload_Get(const QString url,QString strPath);
    bool HttpDownload_Post(const QString url,const QString data,QString strPath);
signals:
    //合成完成
    void signalfinished(QString strFileName);
    void signalerror(QNetworkReply::NetworkError);
private slots:
    //合成完成
    void on_finished();
    void on_signalerror(QNetworkReply::NetworkError);
    //读取缓存中的数据
    void on_readyRead();

private:
    QString m_strContentType;

    QNetworkAccessManager m_NetworkManager;   //网络管理
    QNetworkReply *m_pReply;   //网络响应
    QFile *m_pDownloadedFile;  //保存下载的临时文件
};

#endif // CHTTPHELPER_H
