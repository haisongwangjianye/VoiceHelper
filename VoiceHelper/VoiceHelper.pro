#-------------------------------------------------
#
# Project created by QtCreator 2019-04-17T20:34:25
#
#-------------------------------------------------

QT       += core gui sql xml
QT += multimedia
QT += multimediawidgets
QT += axcontainer
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = iTvmHelper
TEMPLATE = app

RC_FILE = icon.rc

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp\
    cselectinfodialog.cpp \
    cplayvideodialog.cpp \
    ctoolset.cpp \
    httpHelper/chttphelper.cpp \
    Tts/ttswidget.cpp \
    ctitlewidget.cpp \
    ccontentwidget.cpp \
    CustomControl/push_button.cpp \
    CustomControl/tool_button.cpp \
    mainwidget.cpp \
    DataCfgManager/cdataconfigmanager.cpp

HEADERS  += \
    cselectinfodialog.h \
    cplayvideodialog.h \
    ctoolset.h \
    httpHelper/chttphelper.h \
    Tts/ttswidget.h \
    Tts/ttshelperdef.h \
    ctitlewidget.h \
    ccontentwidget.h \
    CustomControl/push_button.h \
    CustomControl/tool_button.h \
    mainwidget.h \
    DataCfgManager/cdataconfigmanager.h \
    DataCfgManager/dataconfigdef.h

FORMS    += \
    cplayvideodialog.ui \
    ctoolset.ui \
    ttswidget.ui

DISTFILES += \
    Config/SqlExampleConfig.xml \
    icon.rc

RESOURCES += \
    image.qrc

