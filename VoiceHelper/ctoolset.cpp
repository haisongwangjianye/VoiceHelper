#include "ctoolset.h"
#include "ui_ctoolset.h"
#pragma execution_character_set("utf-8")
CToolSet::CToolSet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CToolSet)
{
    ui->setupUi(this);
    m_pTabWid = new QTabWidget(this);
    m_pTabWid->setFixedSize(978,580);
    m_pTabWid->setTabPosition(QTabWidget::TabPosition::South);

    m_pTtsWid = new TtsWidget();
    m_pTabWid->addTab(m_pTtsWid,"语音合成");
}

CToolSet::~CToolSet()
{
    delete ui;
}
