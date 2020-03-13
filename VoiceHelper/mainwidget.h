#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "ctitlewidget.h"
#include "ccontentwidget.h"
class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidget(QWidget *parent = 0);

signals:

public slots:
    void showWidget();
    void showMax();
    void showSkinWidget();
    void showMainMenu();
    void showSettingDialog();
    void showAboutUs();

private:
    QRect location;
    CTitleWidget *m_pTitleWidget;
    CContentWidget *m_pContent_widget; //主界面内容
};

#endif // MAINWIDGET_H
