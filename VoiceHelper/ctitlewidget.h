#ifndef CTITLEWIDGET_H
#define CTITLEWIDGET_H

#include <QWidget>
#include <QLabel>
#include "CustomControl/push_button.h"
#include "CustomControl/tool_button.h"
class CTitleWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CTitleWidget(QWidget *parent = 0);

    void translateLanguage();
protected:

    void paintEvent(QPaintEvent *);
protected:
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void mouseDoubleClickEvent(QMouseEvent *);
signals:
    //void showSkin();
    void showMin();
    void showMax();
   // void showMainMenu();
    void closeWidget();
    void CurSelectPage(int);
public slots:

    void turnPage(QString current_page);
private:
    QPoint press_point;//鼠标按下去的点
    bool m_bIs_move;

    QLabel *m_pVersion_title; //标题
    PushButton *m_pMin_button; //最小化
    PushButton *m_pMax_button; //最大化
    PushButton *m_pClose_button; //关闭

    QList<ToolButton *> m_button_list;
    QString  m_strBtnStyle;
};

#endif // CTITLEWIDGET_H
