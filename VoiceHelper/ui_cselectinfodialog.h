/********************************************************************************
** Form generated from reading UI file 'cselectinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSELECTINFODIALOG_H
#define UI_CSELECTINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CSelectInfoDialog
{
public:
    QLabel *label;
    QLineEdit *m_OrderNoLineEdit;
    QDateTimeEdit *m_StartdateTimeEdit;
    QLabel *label_2;
    QLabel *label_3;
    QDateTimeEdit *m_EnddateTimeEdit;
    QLabel *label_4;
    QComboBox *m_UnitPriceComboBox;
    QPushButton *pushButton;

    void setupUi(QDialog *CSelectInfoDialog)
    {
        if (CSelectInfoDialog->objectName().isEmpty())
            CSelectInfoDialog->setObjectName(QStringLiteral("CSelectInfoDialog"));
        CSelectInfoDialog->resize(735, 435);
        label = new QLabel(CSelectInfoDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 54, 12));
        m_OrderNoLineEdit = new QLineEdit(CSelectInfoDialog);
        m_OrderNoLineEdit->setObjectName(QStringLiteral("m_OrderNoLineEdit"));
        m_OrderNoLineEdit->setGeometry(QRect(80, 9, 191, 20));
        m_StartdateTimeEdit = new QDateTimeEdit(CSelectInfoDialog);
        m_StartdateTimeEdit->setObjectName(QStringLiteral("m_StartdateTimeEdit"));
        m_StartdateTimeEdit->setGeometry(QRect(80, 40, 194, 22));
        label_2 = new QLabel(CSelectInfoDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 47, 54, 12));
        label_3 = new QLabel(CSelectInfoDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 44, 54, 12));
        m_EnddateTimeEdit = new QDateTimeEdit(CSelectInfoDialog);
        m_EnddateTimeEdit->setObjectName(QStringLiteral("m_EnddateTimeEdit"));
        m_EnddateTimeEdit->setGeometry(QRect(370, 40, 194, 22));
        label_4 = new QLabel(CSelectInfoDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 80, 54, 12));
        m_UnitPriceComboBox = new QComboBox(CSelectInfoDialog);
        m_UnitPriceComboBox->setObjectName(QStringLiteral("m_UnitPriceComboBox"));
        m_UnitPriceComboBox->setGeometry(QRect(80, 75, 69, 22));
        pushButton = new QPushButton(CSelectInfoDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(640, 400, 75, 23));

        retranslateUi(CSelectInfoDialog);

        QMetaObject::connectSlotsByName(CSelectInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *CSelectInfoDialog)
    {
        CSelectInfoDialog->setWindowTitle(QApplication::translate("CSelectInfoDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("CSelectInfoDialog", "\350\256\242\345\215\225\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("CSelectInfoDialog", "\350\265\267\345\247\213\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("CSelectInfoDialog", "\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("CSelectInfoDialog", "\345\215\225\345\274\240\347\245\250\344\273\267\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CSelectInfoDialog", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CSelectInfoDialog: public Ui_CSelectInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSELECTINFODIALOG_H
