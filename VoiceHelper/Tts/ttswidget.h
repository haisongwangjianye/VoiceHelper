#ifndef TTSWIDGET_H
#define TTSWIDGET_H

#include <QWidget>
#include  <vector>
#include <QStandardItemModel>
#include <QMediaPlayer>
#include <QUrl>
#include <QLabel>
#include "ttshelperdef.h"
#include "httpHelper/chttphelper.h"
namespace Ui {
class TtsWidget;
}

class TtsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TtsWidget(QWidget *parent = 0);
    ~TtsWidget();

protected:
     void paintEvent(QPaintEvent *);
private:
    void InitTable();
    void InitTableContent();
    void InitControl();
    //解析批量合成文件
    bool AnalysisXml();
    //获取token
    void GetToken();
    //解析token响应
    QString AnalyticalTokenRes(QString strRes);
    //合成音频
    bool Tts(QString strText,QString strFileName);
    //在线播放
    bool OnLinePlay(QString strText);

    QString GetVoiceIndex();
    bool getVectVoice(int iIndex,ST_VOICE_XML &strOut);
private slots:
    //双击行
    void slotRowDoubleClicked(const QModelIndex index);
    void slots_CurrTtsInfo(QString strText,QString strMp3Name);
    //选择批量合成的目标文件
    void on_m_pBtnSelectFile_clicked();

    //合成完成
    void on_finished(QString strFileName);
    void on_error(QNetworkReply::NetworkError);
    //播放已经合成的音频文件
    void on_m_pBtnPlayVoice_clicked();
    //选择输出目录
    void on_m_pBtnSelectOutDir_clicked();
    //合成
    void on_m_pBtnTts_clicked();
    //批量合成
    void on_m_pBtnBatchTts_clicked();

    void on_pushButton_clicked();

private:
    Ui::TtsWidget *ui;

    QString m_strOutPath;
    QString m_strXmlFileName;
    QString m_strMp3OutDir;
    std::vector<ST_VOICE_XML> m_stXmVectorl;
    QStandardItemModel* m_model;
    QStandardItemModel* m_Exmpmodel;

    QString m_strAppID;
    QString m_strAPIKey;
    QString m_strSecretKey;
    QString m_strToken;
    QMediaPlayer *m_player;
    bool m_bIsAllTts;
    int m_iCurTtsIndex;
private:
    CHttpHelper *m_pHttpHelper;
    QString m_url;
};

#endif // TTSWIDGET_H
