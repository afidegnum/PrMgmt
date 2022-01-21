#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_push_LoginButton_clicked()
{
    QString usr = ui->line_UsrEdit->text();
    QString pwd = ui->line_PwdEdit->text();

    if(usr == "test" && pwd == "test"){
        hide();
        lw = new ListingsWidgets(this);
        lw->show();
    }else{
        QMessageBox::warning(this,"Login", "InCorrecto!");
    }
}

