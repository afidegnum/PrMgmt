#include "projectwidgetitem.h"
#include "ui_projectwidgetitem.h"

ProjectWidgetItem::ProjectWidgetItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProjectWidgetItem)
{
    ui->setupUi(this);
}

ProjectWidgetItem::~ProjectWidgetItem()
{
    delete ui;
}
