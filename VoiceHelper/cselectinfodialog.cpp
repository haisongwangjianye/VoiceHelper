#include "cselectinfodialog.h"
#include "ui_cselectinfodialog.h"

CSelectInfoDialog::CSelectInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CSelectInfoDialog)
{
    ui->setupUi(this);
    Init();
}

CSelectInfoDialog::~CSelectInfoDialog()
{
    delete ui;
}

void CSelectInfoDialog::Init()
{
    InitUnitPriceCommBox();
    //订单号
    ui->m_OrderNoLineEdit->setPlaceholderText("01201902091354033462");
    //查询起始时间
    ui->m_StartdateTimeEdit->setMinimumDate(QDate::currentDate().addDays(-365));
    ui->m_StartdateTimeEdit->setMaximumDate(QDate::currentDate().addDays(365));
    ui->m_StartdateTimeEdit->setDisplayFormat("yyyy-MM-dd HH:mm:ss");
    //查询结束时间
    ui->m_EnddateTimeEdit->setMinimumDate(QDate::currentDate().addDays(-365));
    ui->m_EnddateTimeEdit->setMaximumDate(QDate::currentDate().addDays(365));
    ui->m_EnddateTimeEdit->setDisplayFormat("yyyy-MM-dd HH:mm:ss");
}

void CSelectInfoDialog::InitUnitPriceCommBox()
{
    ui->m_UnitPriceComboBox->addItem("200");
    ui->m_UnitPriceComboBox->addItem("300");
    ui->m_UnitPriceComboBox->addItem("400");
    ui->m_UnitPriceComboBox->addItem("500");
    ui->m_UnitPriceComboBox->addItem("600");
    ui->m_UnitPriceComboBox->addItem("700");
    ui->m_UnitPriceComboBox->addItem("800");
    ui->m_UnitPriceComboBox->addItem("900");
}

void CSelectInfoDialog::on_pushButton_clicked()
{
    this->close();
}
