/********************************************************************************
** Form generated from reading UI file 'cdownloaddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDOWNLOADDIALOG_H
#define UI_CDOWNLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CDownLoadDialog
{
public:
    QLabel *label;
    QLineEdit *m_plineEditUrl;
    QLineEdit *m_plineEditSavePath;
    QLabel *label_2;
    QPushButton *m_pBtnDownLoad;
    QPushButton *m_pBtnBrowse;
    QLabel *label_3;
    QProgressBar *m_pProgressBar;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *m_plabelSpeech;
    QLabel *m_pLabelFileSize;

    void setupUi(QDialog *CDownLoadDialog)
    {
        if (CDownLoadDialog->objectName().isEmpty())
            CDownLoadDialog->setObjectName(QStringLiteral("CDownLoadDialog"));
        CDownLoadDialog->resize(518, 186);
        label = new QLabel(CDownLoadDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 41, 16));
        m_plineEditUrl = new QLineEdit(CDownLoadDialog);
        m_plineEditUrl->setObjectName(QStringLiteral("m_plineEditUrl"));
        m_plineEditUrl->setGeometry(QRect(70, 28, 291, 20));
        m_plineEditSavePath = new QLineEdit(CDownLoadDialog);
        m_plineEditSavePath->setObjectName(QStringLiteral("m_plineEditSavePath"));
        m_plineEditSavePath->setGeometry(QRect(70, 63, 291, 20));
        label_2 = new QLabel(CDownLoadDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 65, 54, 12));
        m_pBtnDownLoad = new QPushButton(CDownLoadDialog);
        m_pBtnDownLoad->setObjectName(QStringLiteral("m_pBtnDownLoad"));
        m_pBtnDownLoad->setGeometry(QRect(380, 26, 75, 23));
        m_pBtnBrowse = new QPushButton(CDownLoadDialog);
        m_pBtnBrowse->setObjectName(QStringLiteral("m_pBtnBrowse"));
        m_pBtnBrowse->setGeometry(QRect(380, 60, 75, 23));
        label_3 = new QLabel(CDownLoadDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 103, 54, 12));
        m_pProgressBar = new QProgressBar(CDownLoadDialog);
        m_pProgressBar->setObjectName(QStringLiteral("m_pProgressBar"));
        m_pProgressBar->setGeometry(QRect(70, 100, 321, 23));
        m_pProgressBar->setValue(24);
        label_4 = new QLabel(CDownLoadDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 150, 71, 16));
        label_5 = new QLabel(CDownLoadDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(280, 150, 54, 12));
        m_plabelSpeech = new QLabel(CDownLoadDialog);
        m_plabelSpeech->setObjectName(QStringLiteral("m_plabelSpeech"));
        m_plabelSpeech->setGeometry(QRect(120, 150, 81, 16));
        m_pLabelFileSize = new QLabel(CDownLoadDialog);
        m_pLabelFileSize->setObjectName(QStringLiteral("m_pLabelFileSize"));
        m_pLabelFileSize->setGeometry(QRect(350, 150, 71, 16));

        retranslateUi(CDownLoadDialog);

        QMetaObject::connectSlotsByName(CDownLoadDialog);
    } // setupUi

    void retranslateUi(QDialog *CDownLoadDialog)
    {
        CDownLoadDialog->setWindowTitle(QApplication::translate("CDownLoadDialog", "\344\270\213\350\275\275", Q_NULLPTR));
        label->setText(QApplication::translate("CDownLoadDialog", "\345\234\260\345\235\200:", Q_NULLPTR));
        label_2->setText(QApplication::translate("CDownLoadDialog", "\344\277\235\345\255\230\350\267\257\345\276\204:", Q_NULLPTR));
        m_pBtnDownLoad->setText(QApplication::translate("CDownLoadDialog", "\344\270\213\350\275\275", Q_NULLPTR));
        m_pBtnBrowse->setText(QApplication::translate("CDownLoadDialog", "\346\265\217\350\247\210", Q_NULLPTR));
        label_3->setText(QApplication::translate("CDownLoadDialog", "\344\270\213\350\275\275\350\277\233\345\272\246\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("CDownLoadDialog", "\344\270\213\350\275\275\347\275\221\351\200\237:", Q_NULLPTR));
        label_5->setText(QApplication::translate("CDownLoadDialog", "\346\226\207\344\273\266\345\244\247\345\260\217\357\274\232", Q_NULLPTR));
        m_plabelSpeech->setText(QString());
        m_pLabelFileSize->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CDownLoadDialog: public Ui_CDownLoadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDOWNLOADDIALOG_H
