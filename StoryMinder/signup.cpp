#include "signup.h"
#include "ui_signup.h"
#include<signin.h>
#include <QFile>
#include<QDir>
#include<QMessageBox>
#include<QTextStream>
#include<bits/stdc++.h>
#include<iostream>
#include<QLineEdit>
#include<login.h>
#include<QtDebug>

SignUp::SignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);

    //QDialog::showMaximized();
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pushButton_clicked()
{


    QFile userfile("D:/Qt/Story Minder/User/User.txt");
    if(!userfile.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){
        QMessageBox::warning(this,"Warning","File not Opened!");
    }
    QTextStream out(&userfile);
    QString Email= ui->LineEdit_email->text();
    out<<Email<<endl;
    QString Username = ui->LineEdit_username->text();
    out<<Username<<endl;
    QString password = ui->LineEdit_password->text();
    out<<password<<endl;
    out<<endl;
    userfile.flush();
    userfile.close();

    hide();
    SignIn signin;
    signin.setModal(true);
    signin.exec();
}

void SignUp::on_pushButton_2_clicked()
{
    hide();
    Login login;
    login.setModal(true);
    login.exec();


}
