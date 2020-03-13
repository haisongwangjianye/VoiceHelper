/********************************************************************************
** Form generated from reading UI file 'cplayvideodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPLAYVIDEODIALOG_H
#define UI_CPLAYVIDEODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CPlayVideoDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QDialog *CPlayVideoDialog)
    {
        if (CPlayVideoDialog->objectName().isEmpty())
            CPlayVideoDialog->setObjectName(QStringLiteral("CPlayVideoDialog"));
        CPlayVideoDialog->resize(880, 507);
        label = new QLabel(CPlayVideoDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 861, 431));
        pushButton = new QPushButton(CPlayVideoDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(583, 467, 75, 23));
        lineEdit = new QLineEdit(CPlayVideoDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 470, 471, 20));
        label_2 = new QLabel(CPlayVideoDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(5, 473, 54, 12));

        retranslateUi(CPlayVideoDialog);

        QMetaObject::connectSlotsByName(CPlayVideoDialog);
    } // setupUi

    void retranslateUi(QDialog *CPlayVideoDialog)
    {
        CPlayVideoDialog->setWindowTitle(QApplication::translate("CPlayVideoDialog", "Dialog", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("CPlayVideoDialog", "\346\222\255\346\224\276", Q_NULLPTR));
        label_2->setText(QApplication::translate("CPlayVideoDialog", "\346\226\207\344\273\266\350\267\257\345\276\204\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CPlayVideoDialog: public Ui_CPlayVideoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPLAYVIDEODIALOG_H
