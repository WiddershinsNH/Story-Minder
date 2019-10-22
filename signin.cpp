#include "signin.h"
#include "ui_signin.h"
#include<QMessageBox>
#include<welcome.h>

SignIn::SignIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
}

SignIn::~SignIn()
{
    delete ui;
}

void SignIn::on_pushButton_signin_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
     if(username== "test" && password=="test")
    {
       hide();

   QMessageBox::information(this,"SIGN IN","username or password is correct");
   Welcome welcome;
   welcome.setModal(true);
   welcome.exec();
     }
     else
     {
         QMessageBox::warning(this,"SIGN IN","username or password is incorrect");

     }
}
