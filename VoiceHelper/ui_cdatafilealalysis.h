/********************************************************************************
** Form generated from reading UI file 'cdatafilealalysis.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDATAFILEALALYSIS_H
#define UI_CDATAFILEALALYSIS_H

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

class Ui_CDataFileAlalysis
{
public:
    QLabel *label;
    QLineEdit *m_pFileNamelineEdit;
    QPushButton *m_pBtnSelectFile;
    QLabel *label_2;
    QPushButton *m_pBtnStartAnalysis;
    QTextEdit *m_pTextEditResult;
    QGroupBox *groupBox;
    QComboBox *m_pComboBoxCity;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *m_pComboBoxFileType;
    QPushButton *m_pPushButtonClear;
    QPushButton *m_pBtnExeamp;

    void setupUi(QWidget *CDataFileAlalysis)
    {
        if (CDataFileAlalysis->objectName().isEmpty())
            CDataFileAlalysis->setObjectName(QStringLiteral("CDataFileAlalysis"));
        CDataFileAlalysis->resize(978, 610);
        label = new QLabel(CDataFileAlalysis);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(33, 132, 54, 12));
        m_pFileNamelineEdit = new QLineEdit(CDataFileAlalysis);
        m_pFileNamelineEdit->setObjectName(QStringLiteral("m_pFileNamelineEdit"));
        m_pFileNamelineEdit->setGeometry(QRect(100, 130, 381, 20));
        m_pBtnSelectFile = new QPushButton(CDataFileAlalysis);
        m_pBtnSelectFile->setObjectName(QStringLiteral("m_pBtnSelectFile"));
        m_pBtnSelectFile->setGeometry(QRect(520, 130, 75, 23));
        label_2 = new QLabel(CDataFileAlalysis);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 160, 54, 12));
        m_pBtnStartAnalysis = new QPushButton(CDataFileAlalysis);
        m_pBtnStartAnalysis->setObjectName(QStringLiteral("m_pBtnStartAnalysis"));
        m_pBtnStartAnalysis->setGeometry(QRect(620, 130, 75, 23));
        m_pTextEditResult = new QTextEdit(CDataFileAlalysis);
        m_pTextEditResult->setObjectName(QStringLiteral("m_pTextEditResult"));
        m_pTextEditResult->setGeometry(QRect(50, 190, 661, 341));
        groupBox = new QGroupBox(CDataFileAlalysis);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 681, 91));
        m_pComboBoxCity = new QComboBox(groupBox);
        m_pComboBoxCity->setObjectName(QStringLiteral("m_pComboBoxCity"));
        m_pComboBoxCity->setGeometry(QRect(80, 20, 111, 22));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(12, 25, 54, 12));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 23, 54, 12));
        m_pComboBoxFileType = new QComboBox(groupBox);
        m_pComboBoxFileType->setObjectName(QStringLiteral("m_pComboBoxFileType"));
        m_pComboBoxFileType->setGeometry(QRect(290, 20, 241, 22));
        m_pPushButtonClear = new QPushButton(CDataFileAlalysis);
        m_pPushButtonClear->setObjectName(QStringLiteral("m_pPushButtonClear"));
        m_pPushButtonClear->setGeometry(QRect(640, 540, 75, 23));
        m_pBtnExeamp = new QPushButton(CDataFileAlalysis);
        m_pBtnExeamp->setObjectName(QStringLiteral("m_pBtnExeamp"));
        m_pBtnExeamp->setGeometry(QRect(750, 50, 75, 23));

        retranslateUi(CDataFileAlalysis);

        QMetaObject::connectSlotsByName(CDataFileAlalysis);
    } // setupUi

    void retranslateUi(QWidget *CDataFileAlalysis)
    {
        CDataFileAlalysis->setWindowTitle(QApplication::translate("CDataFileAlalysis", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("CDataFileAlalysis", "\346\226\207\344\273\266\345\220\215\357\274\232", Q_NULLPTR));
        m_pBtnSelectFile->setText(QApplication::translate("CDataFileAlalysis", "\351\200\211\346\213\251\346\226\207\344\273\266", Q_NULLPTR));
        label_2->setText(QApplication::translate("CDataFileAlalysis", "\350\247\243\346\236\220\347\273\223\346\236\234\357\274\232", Q_NULLPTR));
        m_pBtnStartAnalysis->setText(QApplication::translate("CDataFileAlalysis", "\350\247\243\346\236\220", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CDataFileAlalysis", "\345\237\272\347\241\200\351\200\211\351\241\271", Q_NULLPTR));
        label_3->setText(QApplication::translate("CDataFileAlalysis", "\345\237\216\345\270\202\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("CDataFileAlalysis", "\346\226\207\344\273\266\347\261\273\345\236\213", Q_NULLPTR));
        m_pPushButtonClear->setText(QApplication::translate("CDataFileAlalysis", "\346\270\205\347\251\272\347\273\223\346\236\234", Q_NULLPTR));
        m_pBtnExeamp->setText(QApplication::translate("CDataFileAlalysis", "\347\244\272\344\276\213\346\222\255\346\224\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CDataFileAlalysis: public Ui_CDataFileAlalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDATAFILEALALYSIS_H
