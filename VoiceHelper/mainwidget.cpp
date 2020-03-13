#include "mainwidget.h"
#include <QApplication>
#include <QDesktopWidget>
MainWidget::MainWidget(QWidget *parent) : QWidget(parent)
{
    setMinimumSize(978,700);
    setWindowIcon(QIcon(":/image/Config/Res/logo.png"));
    setWindowFlags(Qt::FramelessWindowHint);
    location = this->geometry();
    m_pTitleWidget = new CTitleWidget();           //工具栏以及边框
    m_pContent_widget = new CContentWidget();

    QVBoxLayout *center_layout = new QVBoxLayout();
    center_layout->addWidget(m_pContent_widget);
    center_layout->setSpacing(0);
    center_layout->setContentsMargins(1, 0, 1, 1);

    QVBoxLayout *main_layout = new QVBoxLayout();
    main_layout->addWidget(m_pTitleWidget);
    main_layout->addLayout(center_layout);
    main_layout->setSpacing(0);
    main_layout->setContentsMargins(0, 0, 0, 0);

    this->setLayout(main_layout);
    connect(m_pTitleWidget, SIGNAL(CurSelectPage(int)), m_pContent_widget, SLOT(SetCurPage(int)));
    connect(m_pTitleWidget, SIGNAL(showMax()), this, SLOT(showMax()));
    connect(m_pTitleWidget, SIGNAL(showMin()), this, SLOT(showMinimized()));
    connect(m_pTitleWidget, SIGNAL(closeWidget()), this, SLOT(close()));

}

void MainWidget::showWidget()
{
    this->showNormal();
    this->raise();
    this->activateWindow();
    m_pTitleWidget->turnPage(0);
}

void MainWidget::showMax()
{
    qDebug()<<"showMax";
    static bool is_max=false;
    if(is_max)
    {
        this->setGeometry(location);
    }
    else
    {
        //获取当前界面的位置
        location = this->geometry();
        this->setGeometry(QApplication::desktop()->availableGeometry());
    }
    is_max = !is_max;
}


void MainWidget::showSkinWidget()
{

}

void MainWidget::showMainMenu()
{

}

void MainWidget::showSettingDialog()
{

}

void MainWidget::showAboutUs()
{

}

