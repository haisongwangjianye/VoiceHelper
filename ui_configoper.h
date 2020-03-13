/********************************************************************************
** Form generated from reading UI file 'configoper.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGOPER_H
#define UI_CONFIGOPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigOper
{
public:

    void setupUi(QWidget *ConfigOper)
    {
        if (ConfigOper->objectName().isEmpty())
            ConfigOper->setObjectName(QStringLiteral("ConfigOper"));
        ConfigOper->resize(400, 300);

        retranslateUi(ConfigOper);

        QMetaObject::connectSlotsByName(ConfigOper);
    } // setupUi

    void retranslateUi(QWidget *ConfigOper)
    {
        ConfigOper->setWindowTitle(QApplication::translate("ConfigOper", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConfigOper: public Ui_ConfigOper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGOPER_H
