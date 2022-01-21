#include "listingswidgets.h"
#include "ui_listingswidgets.h"

ListingsWidgets::ListingsWidgets(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListingsWidgets)
{
    ui->setupUi(this);
}

ListingsWidgets::~ListingsWidgets()
{
    delete ui;
}
