#include "cdataconfigmanager.h"
#include <QFile>
#include <QTextStream>
#include <QDomDocument>
#include <QDir>
#include <QTextCodec>
#include <QDebug>
#include <QMessageBox>

#pragma execution_character_set("utf-8")


CDataConfigManager *CDataConfigManager::m_pInstance = NULL;
CDataConfigManager *CDataConfigManager::getInstance()
{
    if (m_pInstance == NULL)
    {
        m_pInstance = new CDataConfigManager();
    }
    return m_pInstance;
}

vector<ST_SQL_EXAMPLE> CDataConfigManager::getSqlExampVec()
{
    return m_vecSqlExamp;
}

vector<ST_VIDEO_Tutorial> CDataConfigManager::getVideoTutorial()
{
    return m_vecVideoInfo;
}

CDataConfigManager::CDataConfigManager()
{
    m_strDir = QDir::currentPath();
    qDebug() << "strCurPath:" << m_strDir;
    QString strFile("/Config/SqlExampleConfig.xml");
    QString strConfig = m_strDir + strFile;
    qDebug() << "strConfig:" << strConfig;
    parse(strConfig.toStdString().c_str());

    QString strInputInfoConfig = m_strDir + "/Config/ExampInputInfo.xml";
    loadInputInfo(strInputInfoConfig.toStdString().c_str());

    //strInputInfoConfig = strCurPath + "/Config/shipin/VideoTutorialConfig.xml";
    //loadVideoTutorialConfig(strInputInfoConfig);
}

bool CDataConfigManager::parse(const char *filename)
{
    if( NULL == filename )
    {
        return false;
    }

    qDebug() << "filename:" << filename;
    QFile file( filename );
    if( !file.open(QFile::ReadOnly | QFile::Text) )
    {
        qDebug()<<file.errorString();

        QString str= QString("parse 打开文件:%1 失败").arg(filename);

        QMessageBox msgBox;
        msgBox.setText(QString::fromLocal8Bit(str.toLocal8Bit()));
        msgBox.exec();
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

    QDomElement domSqlConfig = root.firstChildElement();

    ST_SQL_EXAMPLE stSqlExamp;

    while(!domSqlConfig.isNull())
    {

        if(domSqlConfig.hasAttribute("FunName"))
            stSqlExamp.strFunName = domSqlConfig.attributeNode("FunName").value();

        if(domSqlConfig.hasAttribute("sql"))
            stSqlExamp.strSql = domSqlConfig.attributeNode("sql").value();
        qDebug()<<"strFunName:"<<stSqlExamp.strFunName;
        m_vecSqlExamp.push_back(stSqlExamp);
        domSqlConfig = domSqlConfig.nextSiblingElement();
    }
    return true;
}

bool CDataConfigManager::loadInputInfo(const char *filename)
{
    if( NULL == filename )
        return false;
    qDebug() << "filename:" << filename;
    QFile file( filename );
    if( !file.open(QFile::ReadOnly | QFile::Text) )
    {
        QString str= QString("loadInputInfo 打开文件:%1 失败").arg(filename);

        QMessageBox msgBox;
        msgBox.setText(QString::fromLocal8Bit(str.toLocal8Bit()));
        msgBox.exec();
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

    QDomElement domSqlConfig = root.firstChildElement();

    while(!domSqlConfig.isNull())
    {

        if(domSqlConfig.hasAttribute("inputInfo"))
        {
            m_stInputInfos.strInpuInfo = domSqlConfig.attributeNode("infoVec").value();
            qDebug()<<"strInpuInfo:"<<m_stInputInfos.strInpuInfo;
        }



        if(domSqlConfig.hasAttribute("Info"))
        {
            ST_INPUT_INFO stInputInfo;
            stInputInfo.strID  = domSqlConfig.attributeNode("ID").value();
            stInputInfo.strInput  = domSqlConfig.attributeNode("inputFalg").value();
            qDebug()<<"strID:"<<stInputInfo.strID<<" strInput:"<<stInputInfo.strInput;
            m_stInputInfos.vecInputInfo.push_back(stInputInfo);
        }

        domSqlConfig = domSqlConfig.nextSiblingElement();
    }
    return true;
}

bool CDataConfigManager::loadVideoTutorialConfig()
{
    QString strFileName = m_strDir + "/Config/shipin/VideoTutorialConfig.xml";

    qDebug()<<strFileName;
    QFile file( strFileName );
    if( !file.open(QFile::ReadOnly | QFile::Text) )
    {
        QString str= QString("loadInputInfo 打开文件:%1 失败").arg(strFileName);

        QMessageBox msgBox;
        msgBox.setText(QString::fromLocal8Bit(str.toLocal8Bit()));
        msgBox.exec();
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

    QDomElement dirItem = root.firstChildElement();
    while(!dirItem.isNull())
    {
        QString strTagName = dirItem.tagName();
        qDebug()<<strTagName;
        ST_VIDEO_Tutorial stVideoDir;
        if(strTagName.compare("dir") == 0)
        {
            stVideoDir.strItemName = dirItem.attributeNode("name").value();
            qDebug()<<"strInpuInfo:"<<stVideoDir.strItemName;
            QDomElement item = dirItem.firstChildElement();
            while(!item.isNull())
            {
                ST_VIDEO_ITEM videoItem;
                videoItem.strItemName = item.attributeNode("name").value();
                videoItem.strUrl = item.attributeNode("url").value();
                qDebug()<<"strItemName:"<<videoItem.strItemName;
                qDebug()<<"strUrl:"<<videoItem.strUrl;
                stVideoDir.vecSubItem.push_back(videoItem);

                item = item.nextSiblingElement();
            }
        }
        m_vecVideoInfo.push_back(stVideoDir);
        dirItem = dirItem.nextSiblingElement();
    }
    return true;
}
