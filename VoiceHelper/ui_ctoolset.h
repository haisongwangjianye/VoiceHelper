/********************************************************************************
** Form generated from reading UI file 'ctoolset.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTOOLSET_H
#define UI_CTOOLSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CToolSet
{
public:

    void setupUi(QWidget *CToolSet)
    {
        if (CToolSet->objectName().isEmpty())
            CToolSet->setObjectName(QStringLiteral("CToolSet"));
        CToolSet->resize(1177, 570);

        retranslateUi(CToolSet);

        QMetaObject::connectSlotsByName(CToolSet);
    } // setupUi

    void retranslateUi(QWidget *CToolSet)
    {
        CToolSet->setWindowTitle(QApplication::translate("CToolSet", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CToolSet: public Ui_CToolSet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTOOLSET_H
