#include "welcome.h"
#include "ui_welcome.h"
#include<QMessageBox>
#include<QDebug>



Welcome::Welcome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Welcome)
{
    ui->setupUi(this);
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox :: question(this,"Story Minder","Do you really want to close",
                                                               QMessageBox::Yes | QMessageBox::No);
    if(reply== QMessageBox::Yes)
    {
    QApplication::quit();

    }
    else
    {
      qDebug() <<"No is clicked";
    }
}

void Welcome::on_pushButton_clicked()
{
hide();
today = new Today(this);
today->show();


}
