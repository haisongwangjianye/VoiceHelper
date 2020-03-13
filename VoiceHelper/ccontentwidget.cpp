#include "ccontentwidget.h"
#include <QPainter>
#include <QDebug>
#include <QVBoxLayout>
CContentWidget::CContentWidget(QWidget *parent) : QWidget(parent)
{
    Init();
}

void CContentWidget::Init()
{
    m_pStackWidget = new QStackedWidget(this);

    m_pVideoPlay = new CPlayVideoDialog();
    m_pToolSet = new CToolSet();

    m_pStackWidget->addWidget(m_pToolSet);
    m_pStackWidget->setCurrentIndex(0);

    int iSize = m_pStackWidget->count();
    qDebug()<<"iPage Size "<<iSize;

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(m_pStackWidget);
    setLayout(layout);

   // connect(m_pDataFileAlaysis,SIGNAL(playVideo(QString)),this,SLOT(playVideo(QString)));
}

void CContentWidget::paintEvent(QPaintEvent *)
{
    QString strSkin_name("./Config/Res/18.jpg");
    QPainter painter(this);
    painter.drawPixmap(rect(), QPixmap(strSkin_name));
}

void CContentWidget::SetCurPage(int iCurPage)
{
    int iSize = m_pStackWidget->count();
    qDebug()<<"iPage Size "<<iSize;
    int iIndex = 0;
    if(iCurPage < iSize)
    {
        iIndex = iCurPage;
    }
    m_pStackWidget->setCurrentIndex(iIndex);
}

void CContentWidget::playVideo(QString strVideoName)
{
    m_pVideoPlay->SetPlayRec(strVideoName);
    m_pVideoPlay->show();
}
