/********************************************************************************
** Form generated from reading UI file 'coperdbhelper.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPERDBHELPER_H
#define UI_COPERDBHELPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_COperDbHelper
{
public:
    QLabel *label;
    QLineEdit *m_dbPathEdit;
    QPushButton *m_btnSelectDb;
    QTextEdit *m_sqlEdit;
    QPushButton *m_btnProSql;
    QLabel *label_2;
    QPushButton *m_btnClearSql;
    QGroupBox *groupBox;
    QTableView *m_sqlResTable;
    QPushButton *m_btnClearSqlRes;
    QLabel *m_TipInfoLabel;
    QPushButton *m_btnOpenDb;
    QPushButton *m_btnCloseDb;
    QGroupBox *groupBox_2;
    QTableView *m_SqlExampleTable;
    QLabel *label_3;
    QDateTimeEdit *m_StartdateTimeEdit;
    QLabel *label_4;
    QDateTimeEdit *m_EndDateTimeEdit;
    QComboBox *m_PraiceComboBox;
    QLabel *label_5;
    QPushButton *m_BtnSelectSure;
    QLabel *label_6;
    QLineEdit *m_OrdNolineEdit;
    QLabel *label_7;
    QLineEdit *m_TransIDlineEdit;

    void setupUi(QWidget *COperDbHelper)
    {
        if (COperDbHelper->objectName().isEmpty())
            COperDbHelper->setObjectName(QStringLiteral("COperDbHelper"));
        COperDbHelper->resize(978, 568);
        label = new QLabel(COperDbHelper);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 54, 12));
        m_dbPathEdit = new QLineEdit(COperDbHelper);
        m_dbPathEdit->setObjectName(QStringLiteral("m_dbPathEdit"));
        m_dbPathEdit->setGeometry(QRect(60, 6, 461, 20));
        m_btnSelectDb = new QPushButton(COperDbHelper);
        m_btnSelectDb->setObjectName(QStringLiteral("m_btnSelectDb"));
        m_btnSelectDb->setGeometry(QRect(530, 5, 81, 23));
        m_sqlEdit = new QTextEdit(COperDbHelper);
        m_sqlEdit->setObjectName(QStringLiteral("m_sqlEdit"));
        m_sqlEdit->setGeometry(QRect(60, 240, 591, 91));
        m_sqlEdit->setAutoFillBackground(false);
        m_btnProSql = new QPushButton(COperDbHelper);
        m_btnProSql->setObjectName(QStringLiteral("m_btnProSql"));
        m_btnProSql->setGeometry(QRect(460, 333, 81, 23));
        label_2 = new QLabel(COperDbHelper);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 280, 51, 16));
        m_btnClearSql = new QPushButton(COperDbHelper);
        m_btnClearSql->setObjectName(QStringLiteral("m_btnClearSql"));
        m_btnClearSql->setGeometry(QRect(570, 334, 81, 23));
        groupBox = new QGroupBox(COperDbHelper);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 370, 651, 211));
        m_sqlResTable = new QTableView(groupBox);
        m_sqlResTable->setObjectName(QStringLiteral("m_sqlResTable"));
        m_sqlResTable->setGeometry(QRect(50, 20, 591, 121));
        m_btnClearSqlRes = new QPushButton(groupBox);
        m_btnClearSqlRes->setObjectName(QStringLiteral("m_btnClearSqlRes"));
        m_btnClearSqlRes->setGeometry(QRect(550, 147, 91, 23));
        m_TipInfoLabel = new QLabel(groupBox);
        m_TipInfoLabel->setObjectName(QStringLiteral("m_TipInfoLabel"));
        m_TipInfoLabel->setGeometry(QRect(50, 140, 481, 21));
        m_btnOpenDb = new QPushButton(COperDbHelper);
        m_btnOpenDb->setObjectName(QStringLiteral("m_btnOpenDb"));
        m_btnOpenDb->setGeometry(QRect(630, 5, 75, 23));
        m_btnCloseDb = new QPushButton(COperDbHelper);
        m_btnCloseDb->setObjectName(QStringLiteral("m_btnCloseDb"));
        m_btnCloseDb->setGeometry(QRect(720, 4, 75, 23));
        groupBox_2 = new QGroupBox(COperDbHelper);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 40, 651, 191));
        m_SqlExampleTable = new QTableView(groupBox_2);
        m_SqlExampleTable->setObjectName(QStringLiteral("m_SqlExampleTable"));
        m_SqlExampleTable->setGeometry(QRect(50, 20, 591, 161));
        label_3 = new QLabel(COperDbHelper);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(690, 61, 61, 16));
        m_StartdateTimeEdit = new QDateTimeEdit(COperDbHelper);
        m_StartdateTimeEdit->setObjectName(QStringLiteral("m_StartdateTimeEdit"));
        m_StartdateTimeEdit->setGeometry(QRect(750, 60, 194, 22));
        label_4 = new QLabel(COperDbHelper);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(690, 90, 54, 12));
        m_EndDateTimeEdit = new QDateTimeEdit(COperDbHelper);
        m_EndDateTimeEdit->setObjectName(QStringLiteral("m_EndDateTimeEdit"));
        m_EndDateTimeEdit->setGeometry(QRect(750, 87, 194, 22));
        m_PraiceComboBox = new QComboBox(COperDbHelper);
        m_PraiceComboBox->setObjectName(QStringLiteral("m_PraiceComboBox"));
        m_PraiceComboBox->setGeometry(QRect(750, 190, 101, 22));
        label_5 = new QLabel(COperDbHelper);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(691, 195, 41, 16));
        m_BtnSelectSure = new QPushButton(COperDbHelper);
        m_BtnSelectSure->setObjectName(QStringLiteral("m_BtnSelectSure"));
        m_BtnSelectSure->setGeometry(QRect(870, 240, 75, 23));
        label_6 = new QLabel(COperDbHelper);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(690, 123, 54, 12));
        m_OrdNolineEdit = new QLineEdit(COperDbHelper);
        m_OrdNolineEdit->setObjectName(QStringLiteral("m_OrdNolineEdit"));
        m_OrdNolineEdit->setGeometry(QRect(750, 120, 191, 20));
        label_7 = new QLabel(COperDbHelper);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(690, 153, 54, 12));
        m_TransIDlineEdit = new QLineEdit(COperDbHelper);
        m_TransIDlineEdit->setObjectName(QStringLiteral("m_TransIDlineEdit"));
        m_TransIDlineEdit->setGeometry(QRect(750, 150, 101, 20));

        retranslateUi(COperDbHelper);

        QMetaObject::connectSlotsByName(COperDbHelper);
    } // setupUi

    void retranslateUi(QWidget *COperDbHelper)
    {
        COperDbHelper->setWindowTitle(QApplication::translate("COperDbHelper", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("COperDbHelper", "\346\225\260\346\215\256\345\272\223:", Q_NULLPTR));
        m_btnSelectDb->setText(QApplication::translate("COperDbHelper", "\351\200\211\346\213\251\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        m_btnProSql->setText(QApplication::translate("COperDbHelper", "\346\211\247\350\241\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("COperDbHelper", "Sql\350\257\255\345\217\245:", Q_NULLPTR));
        m_btnClearSql->setText(QApplication::translate("COperDbHelper", "\346\270\205\347\251\272sql", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("COperDbHelper", "\346\211\247\350\241\214\347\273\223\346\236\234", Q_NULLPTR));
        m_btnClearSqlRes->setText(QApplication::translate("COperDbHelper", "\346\270\205\347\251\272\346\237\245\350\257\242\347\273\223\346\236\234", Q_NULLPTR));
        m_TipInfoLabel->setText(QString());
        m_btnOpenDb->setText(QApplication::translate("COperDbHelper", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        m_btnCloseDb->setText(QApplication::translate("COperDbHelper", "\345\205\263\351\227\255\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("COperDbHelper", "sql\346\237\245\350\257\242\347\244\272\344\276\213", Q_NULLPTR));
        label_3->setText(QApplication::translate("COperDbHelper", "\345\274\200\345\247\213\346\227\266\351\227\264:", Q_NULLPTR));
        label_4->setText(QApplication::translate("COperDbHelper", "\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("COperDbHelper", "\345\215\225\344\273\267\357\274\232", Q_NULLPTR));
        m_BtnSelectSure->setText(QApplication::translate("COperDbHelper", "\347\241\256\345\256\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("COperDbHelper", "\350\256\242\345\215\225\345\217\267\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("COperDbHelper", "TransID:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class COperDbHelper: public Ui_COperDbHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPERDBHELPER_H
