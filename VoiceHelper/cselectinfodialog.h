#ifndef CSELECTINFODIALOG_H
#define CSELECTINFODIALOG_H

#include <QDialog>

namespace Ui {
class CSelectInfoDialog;
}

class CSelectInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CSelectInfoDialog(QWidget *parent = 0);
    ~CSelectInfoDialog();
    void Init();
    void InitUnitPriceCommBox();
private slots:
    void on_pushButton_clicked();

private:
    Ui::CSelectInfoDialog *ui;
};

#endif // CSELECTINFODIALOG_H
