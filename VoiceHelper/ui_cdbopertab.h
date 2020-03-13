/********************************************************************************
** Form generated from reading UI file 'cdbopertab.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDBOPERTAB_H
#define UI_CDBOPERTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDbOperTab
{
public:

    void setupUi(QWidget *CDbOperTab)
    {
        if (CDbOperTab->objectName().isEmpty())
            CDbOperTab->setObjectName(QStringLiteral("CDbOperTab"));
        CDbOperTab->resize(400, 300);

        retranslateUi(CDbOperTab);

        QMetaObject::connectSlotsByName(CDbOperTab);
    } // setupUi

    void retranslateUi(QWidget *CDbOperTab)
    {
        CDbOperTab->setWindowTitle(QApplication::translate("CDbOperTab", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CDbOperTab: public Ui_CDbOperTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDBOPERTAB_H
