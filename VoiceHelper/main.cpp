#include <QApplication>
#include <QTextCodec>
#include "mainwidget.h"
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    w.setWindowFlags(w.windowFlags() &~ Qt::WindowMaximizeButtonHint);
    w.show();

    w.move ((QApplication::desktop()->width() - w.width())/2
            ,(QApplication::desktop()->height() - w.height())/2);
    return a.exec();
}
