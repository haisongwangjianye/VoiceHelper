/********************************************************************************
** Form generated from reading UI file 'cloganalysishelper.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOGANALYSISHELPER_H
#define UI_CLOGANALYSISHELPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CLogAnalysisHelper
{
public:

    void setupUi(QWidget *CLogAnalysisHelper)
    {
        if (CLogAnalysisHelper->objectName().isEmpty())
            CLogAnalysisHelper->setObjectName(QStringLiteral("CLogAnalysisHelper"));
        CLogAnalysisHelper->resize(978, 610);

        retranslateUi(CLogAnalysisHelper);

        QMetaObject::connectSlotsByName(CLogAnalysisHelper);
    } // setupUi

    void retranslateUi(QWidget *CLogAnalysisHelper)
    {
        CLogAnalysisHelper->setWindowTitle(QApplication::translate("CLogAnalysisHelper", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CLogAnalysisHelper: public Ui_CLogAnalysisHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOGANALYSISHELPER_H
