#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

#include "listingdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_push_LoginButton_clicked();

private:
    Ui::Dialog *ui;

    ListingDialog *ld;
};
#endif // DIALOG_H
