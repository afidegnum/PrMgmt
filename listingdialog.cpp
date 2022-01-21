#include "listingdialog.h"
#include "ui_listingdialog.h"

ListingDialog::ListingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListingDialog)
{
    ui->setupUi(this);
}

ListingDialog::~ListingDialog()
{
    delete ui;
}
