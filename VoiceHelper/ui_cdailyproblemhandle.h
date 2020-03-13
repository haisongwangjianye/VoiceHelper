/********************************************************************************
** Form generated from reading UI file 'cdailyproblemhandle.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDAILYPROBLEMHANDLE_H
#define UI_CDAILYPROBLEMHANDLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CDailyProblemHandle
{
public:

    void setupUi(QWidget *CDailyProblemHandle)
    {
        if (CDailyProblemHandle->objectName().isEmpty())
            CDailyProblemHandle->setObjectName(QStringLiteral("CDailyProblemHandle"));
        CDailyProblemHandle->resize(827, 470);

        retranslateUi(CDailyProblemHandle);

        QMetaObject::connectSlotsByName(CDailyProblemHandle);
    } // setupUi

    void retranslateUi(QWidget *CDailyProblemHandle)
    {
        CDailyProblemHandle->setWindowTitle(QApplication::translate("CDailyProblemHandle", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CDailyProblemHandle: public Ui_CDailyProblemHandle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDAILYPROBLEMHANDLE_H
