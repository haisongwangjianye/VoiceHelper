#ifndef CTOOLSET_H
#define CTOOLSET_H

#include <QWidget>
#include <QTabWidget>
#include "Tts/ttswidget.h"
namespace Ui {
class CToolSet;
}

class CToolSet : public QWidget
{
    Q_OBJECT

public:
    explicit CToolSet(QWidget *parent = 0);
    ~CToolSet();

private:
    Ui::CToolSet *ui;
    QTabWidget * m_pTabWid;
    TtsWidget *m_pTtsWid;  //语音合成
};

#endif // CTOOLSET_H
