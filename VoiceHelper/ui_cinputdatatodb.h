/********************************************************************************
** Form generated from reading UI file 'cinputdatatodb.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CINPUTDATATODB_H
#define UI_CINPUTDATATODB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CInputDataToDb
{
public:
    QPushButton *m_btnSelectDb;
    QPushButton *m_btnOpenDb;
    QLineEdit *m_dbPathEdit;
    QLabel *label;
    QPushButton *m_btnCloseDb;
    QLabel *m_TipInfoLabel;
    QGroupBox *groupBox;
    QTextEdit *m_pDataTextEdit;
    QGroupBox *groupBox_2;
    QTextEdit *m_pSqlTextEdit;
    QLabel *label_2;
    QComboBox *m_pTableNameComboBox;
    QLabel *label_3;
    QLineEdit *m_pIndexlineEdit;
    QPushButton *m_pBtnExeSql;
    QPushButton *m_pBtnSure;

    void setupUi(QWidget *CInputDataToDb)
    {
        if (CInputDataToDb->objectName().isEmpty())
            CInputDataToDb->setObjectName(QStringLiteral("CInputDataToDb"));
        CInputDataToDb->resize(978, 568);
        m_btnSelectDb = new QPushButton(CInputDataToDb);
        m_btnSelectDb->setObjectName(QStringLiteral("m_btnSelectDb"));
        m_btnSelectDb->setGeometry(QRect(500, 21, 81, 23));
        m_btnOpenDb = new QPushButton(CInputDataToDb);
        m_btnOpenDb->setObjectName(QStringLiteral("m_btnOpenDb"));
        m_btnOpenDb->setGeometry(QRect(600, 21, 75, 23));
        m_dbPathEdit = new QLineEdit(CInputDataToDb);
        m_dbPathEdit->setObjectName(QStringLiteral("m_dbPathEdit"));
        m_dbPathEdit->setGeometry(QRect(60, 22, 421, 20));
        label = new QLabel(CInputDataToDb);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 26, 54, 12));
        m_btnCloseDb = new QPushButton(CInputDataToDb);
        m_btnCloseDb->setObjectName(QStringLiteral("m_btnCloseDb"));
        m_btnCloseDb->setGeometry(QRect(690, 20, 75, 23));
        m_TipInfoLabel = new QLabel(CInputDataToDb);
        m_TipInfoLabel->setObjectName(QStringLiteral("m_TipInfoLabel"));
        m_TipInfoLabel->setGeometry(QRect(10, 470, 481, 21));
        groupBox = new QGroupBox(CInputDataToDb);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 60, 671, 201));
        m_pDataTextEdit = new QTextEdit(groupBox);
        m_pDataTextEdit->setObjectName(QStringLiteral("m_pDataTextEdit"));
        m_pDataTextEdit->setGeometry(QRect(10, 20, 651, 171));
        groupBox_2 = new QGroupBox(CInputDataToDb);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 270, 671, 161));
        m_pSqlTextEdit = new QTextEdit(groupBox_2);
        m_pSqlTextEdit->setObjectName(QStringLiteral("m_pSqlTextEdit"));
        m_pSqlTextEdit->setGeometry(QRect(10, 20, 651, 131));
        label_2 = new QLabel(CInputDataToDb);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(710, 95, 54, 12));
        m_pTableNameComboBox = new QComboBox(CInputDataToDb);
        m_pTableNameComboBox->setObjectName(QStringLiteral("m_pTableNameComboBox"));
        m_pTableNameComboBox->setGeometry(QRect(750, 90, 171, 22));
        label_3 = new QLabel(CInputDataToDb);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(714, 135, 54, 12));
        m_pIndexlineEdit = new QLineEdit(CInputDataToDb);
        m_pIndexlineEdit->setObjectName(QStringLiteral("m_pIndexlineEdit"));
        m_pIndexlineEdit->setGeometry(QRect(750, 130, 171, 20));
        m_pBtnExeSql = new QPushButton(CInputDataToDb);
        m_pBtnExeSql->setObjectName(QStringLiteral("m_pBtnExeSql"));
        m_pBtnExeSql->setGeometry(QRect(700, 390, 75, 23));
        m_pBtnSure = new QPushButton(CInputDataToDb);
        m_pBtnSure->setObjectName(QStringLiteral("m_pBtnSure"));
        m_pBtnSure->setGeometry(QRect(840, 180, 75, 23));

        retranslateUi(CInputDataToDb);

        QMetaObject::connectSlotsByName(CInputDataToDb);
    } // setupUi

    void retranslateUi(QWidget *CInputDataToDb)
    {
        CInputDataToDb->setWindowTitle(QApplication::translate("CInputDataToDb", "Form", Q_NULLPTR));
        m_btnSelectDb->setText(QApplication::translate("CInputDataToDb", "\351\200\211\346\213\251\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        m_btnOpenDb->setText(QApplication::translate("CInputDataToDb", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        label->setText(QApplication::translate("CInputDataToDb", "\346\225\260\346\215\256\345\272\223:", Q_NULLPTR));
        m_btnCloseDb->setText(QApplication::translate("CInputDataToDb", "\345\205\263\351\227\255\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        m_TipInfoLabel->setText(QString());
        groupBox->setTitle(QApplication::translate("CInputDataToDb", " \350\276\223\345\205\245\350\246\201\346\217\222\345\205\245\347\232\204\346\225\260\346\215\256", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("CInputDataToDb", "Sql\350\257\255\345\217\245", Q_NULLPTR));
        label_2->setText(QApplication::translate("CInputDataToDb", "\350\241\250\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("CInputDataToDb", "\347\264\242\345\274\225\357\274\232", Q_NULLPTR));
        m_pBtnExeSql->setText(QApplication::translate("CInputDataToDb", "\346\211\247\350\241\214", Q_NULLPTR));
        m_pBtnSure->setText(QApplication::translate("CInputDataToDb", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CInputDataToDb: public Ui_CInputDataToDb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CINPUTDATATODB_H
