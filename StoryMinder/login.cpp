#include "login.h"
#include "ui_login.h"
#include<signin.h>
#include<signup.h>
#include<QFile>
#include<QDir>
#include<QMessageBox>

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

   //QDialog::showMaximized();
    QDir UserDir("D:/Qt/Story Minder/User");
    if(!UserDir.exists()){
        UserDir.mkpath("D:/Qt/Story Minder/User");

    }
    QDir StoriesDir("D:/Qt/Story Minder/Stories");
        if(!StoriesDir.exists()){
            StoriesDir.mkpath("D:/Qt/Story Minder/Stories");
    }
    QFile file("D:/Qt/Story Minder/User/User.txt");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){
        QMessageBox::warning(this,"Warning","File not Opened!");
    }
}

Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_signin_clicked()
{
    hide();
    SignIn signin;
    signin.setModal(true);
    signin.exec();
}

void Login::on_pushButton_signup_clicked()
{
    hide();
    SignUp signup;
    signup.setModal(true);
    signup.exec();
}
