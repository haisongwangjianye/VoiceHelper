#ifndef CPLAYVIDEODIALOG_H
#define CPLAYVIDEODIALOG_H

#include <QDialog>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>
namespace Ui {
class CPlayVideoDialog;
}

class CPlayVideoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CPlayVideoDialog(QWidget *parent = 0);
    ~CPlayVideoDialog();

    void SetPlayRec(QString strFile);

private slots:
    void on_pushButton_clicked();

private:
    void Init();
    void startPlay();
    Ui::CPlayVideoDialog *ui;
    QMediaPlayer *player;
    QVideoWidget *videowidget;
    QVBoxLayout *layout;

    QString m_strPlayFile;
};

#endif // CPLAYVIDEODIALOG_H
