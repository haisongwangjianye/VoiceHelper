/********************************************************************************
** Form generated from reading UI file 'cplayvideo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPLAYVIDEO_H
#define UI_CPLAYVIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CPlayVideo
{
public:

    void setupUi(QWidget *CPlayVideo)
    {
        if (CPlayVideo->objectName().isEmpty())
            CPlayVideo->setObjectName(QStringLiteral("CPlayVideo"));
        CPlayVideo->resize(400, 300);

        retranslateUi(CPlayVideo);

        QMetaObject::connectSlotsByName(CPlayVideo);
    } // setupUi

    void retranslateUi(QWidget *CPlayVideo)
    {
        CPlayVideo->setWindowTitle(QApplication::translate("CPlayVideo", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CPlayVideo: public Ui_CPlayVideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPLAYVIDEO_H
