#ifndef LISTINGDIALOG_H
#define LISTINGDIALOG_H

#include <QDialog>

namespace Ui {
class ListingDialog;
}

class ListingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ListingDialog(QWidget *parent = nullptr);
    ~ListingDialog();

private:
    Ui::ListingDialog *ui;
};

#endif // LISTINGDIALOG_H
