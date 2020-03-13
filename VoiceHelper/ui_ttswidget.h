/********************************************************************************
** Form generated from reading UI file 'ttswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTSWIDGET_H
#define UI_TTSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TtsWidget
{
public:
    QPushButton *m_pBtnBatchTts;
    QTextEdit *WilltextEdit;
    QLabel *label_6;
    QLabel *label_2;
    QComboBox *m_YuShuCommBox;
    QPushButton *m_pBtnPlayVoice;
    QPushButton *m_pBtnSelectFile;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *labelTip;
    QTableView *tableView;
    QPushButton *m_pBtnSelectOutDir;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *outMp3NamelineEdit;
    QComboBox *m_YinLiangComboBox;
    QPushButton *m_pBtnTts;
    QComboBox *m_VoiceSetcomboBox;
    QComboBox *m_YinDiaoComboBox;

    void setupUi(QWidget *TtsWidget)
    {
        if (TtsWidget->objectName().isEmpty())
            TtsWidget->setObjectName(QStringLiteral("TtsWidget"));
        TtsWidget->resize(978, 610);
        m_pBtnBatchTts = new QPushButton(TtsWidget);
        m_pBtnBatchTts->setObjectName(QStringLiteral("m_pBtnBatchTts"));
        m_pBtnBatchTts->setGeometry(QRect(820, 480, 95, 31));
        WilltextEdit = new QTextEdit(TtsWidget);
        WilltextEdit->setObjectName(QStringLiteral("WilltextEdit"));
        WilltextEdit->setGeometry(QRect(30, 390, 871, 61));
        label_6 = new QLabel(TtsWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(760, 340, 41, 20));
        label_2 = new QLabel(TtsWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 480, 111, 20));
        m_YuShuCommBox = new QComboBox(TtsWidget);
        m_YuShuCommBox->setObjectName(QStringLiteral("m_YuShuCommBox"));
        m_YuShuCommBox->setGeometry(QRect(520, 340, 83, 28));
        m_pBtnPlayVoice = new QPushButton(TtsWidget);
        m_pBtnPlayVoice->setObjectName(QStringLiteral("m_pBtnPlayVoice"));
        m_pBtnPlayVoice->setGeometry(QRect(820, 520, 95, 30));
        m_pBtnSelectFile = new QPushButton(TtsWidget);
        m_pBtnSelectFile->setObjectName(QStringLiteral("m_pBtnSelectFile"));
        m_pBtnSelectFile->setGeometry(QRect(20, 20, 95, 30));
        label_4 = new QLabel(TtsWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(480, 340, 41, 20));
        label_5 = new QLabel(TtsWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(620, 340, 41, 20));
        labelTip = new QLabel(TtsWidget);
        labelTip->setObjectName(QStringLiteral("labelTip"));
        labelTip->setGeometry(QRect(20, 520, 321, 41));
        tableView = new QTableView(TtsWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 60, 881, 261));
        m_pBtnSelectOutDir = new QPushButton(TtsWidget);
        m_pBtnSelectOutDir->setObjectName(QStringLiteral("m_pBtnSelectOutDir"));
        m_pBtnSelectOutDir->setGeometry(QRect(590, 480, 95, 30));
        label = new QLabel(TtsWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 360, 101, 20));
        label_3 = new QLabel(TtsWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 340, 66, 20));
        outMp3NamelineEdit = new QLineEdit(TtsWidget);
        outMp3NamelineEdit->setObjectName(QStringLiteral("outMp3NamelineEdit"));
        outMp3NamelineEdit->setGeometry(QRect(130, 480, 431, 32));
        m_YinLiangComboBox = new QComboBox(TtsWidget);
        m_YinLiangComboBox->setObjectName(QStringLiteral("m_YinLiangComboBox"));
        m_YinLiangComboBox->setGeometry(QRect(810, 340, 83, 28));
        m_pBtnTts = new QPushButton(TtsWidget);
        m_pBtnTts->setObjectName(QStringLiteral("m_pBtnTts"));
        m_pBtnTts->setGeometry(QRect(710, 480, 95, 30));
        m_VoiceSetcomboBox = new QComboBox(TtsWidget);
        m_VoiceSetcomboBox->setObjectName(QStringLiteral("m_VoiceSetcomboBox"));
        m_VoiceSetcomboBox->setGeometry(QRect(292, 340, 171, 28));
        m_YinDiaoComboBox = new QComboBox(TtsWidget);
        m_YinDiaoComboBox->setObjectName(QStringLiteral("m_YinDiaoComboBox"));
        m_YinDiaoComboBox->setGeometry(QRect(660, 340, 83, 28));

        retranslateUi(TtsWidget);

        QMetaObject::connectSlotsByName(TtsWidget);
    } // setupUi

    void retranslateUi(QWidget *TtsWidget)
    {
        TtsWidget->setWindowTitle(QApplication::translate("TtsWidget", "Form", Q_NULLPTR));
        m_pBtnBatchTts->setText(QApplication::translate("TtsWidget", "\346\211\271\351\207\217\345\220\210\346\210\220", Q_NULLPTR));
        label_6->setText(QApplication::translate("TtsWidget", "\351\237\263\351\207\217\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("TtsWidget", "\345\220\210\346\210\220mp3\346\226\207\344\273\266\345\220\215:", Q_NULLPTR));
        m_pBtnPlayVoice->setText(QApplication::translate("TtsWidget", "\346\222\255\346\224\276", Q_NULLPTR));
        m_pBtnSelectFile->setText(QApplication::translate("TtsWidget", "\351\200\211\346\213\251\351\205\215\347\275\256", Q_NULLPTR));
        label_4->setText(QApplication::translate("TtsWidget", "\350\257\255\351\200\237\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("TtsWidget", "\351\237\263\350\260\203\357\274\232", Q_NULLPTR));
        labelTip->setText(QString());
        m_pBtnSelectOutDir->setText(QApplication::translate("TtsWidget", "\350\276\223\345\207\272\347\233\256\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("TtsWidget", "\350\246\201\345\220\210\346\210\220\347\232\204\346\226\207\345\255\227:", Q_NULLPTR));
        label_3->setText(QApplication::translate("TtsWidget", "\345\243\260\351\237\263\350\256\276\347\275\256\357\274\232", Q_NULLPTR));
        m_pBtnTts->setText(QApplication::translate("TtsWidget", "\345\220\210\346\210\220", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TtsWidget: public Ui_TtsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTSWIDGET_H
