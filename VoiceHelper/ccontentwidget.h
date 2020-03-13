#ifndef CCONTENTWIDGET_H
#define CCONTENTWIDGET_H

#include <QWidget>
#include <QStackedWidget>
#include "cplayvideodialog.h"
#include "ctoolset.h"
class CContentWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CContentWidget(QWidget *parent = 0);

    void Init();
protected:

    void paintEvent(QPaintEvent *);
signals:

public slots:
    void SetCurPage(int);

    void playVideo(QString strVideoName);
private:
    QStackedWidget *m_pStackWidget;
    CPlayVideoDialog *m_pVideoPlay;
    CToolSet *m_pToolSet;
};

#endif // CCONTENTWIDGET_H
