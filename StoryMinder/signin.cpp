#include "signin.h"
#include "ui_signin.h"
#include<welcome.h>
#include <QFile>
#include<QDir>
#include<QMessageBox>
#include<QTextStream>
#include<bits/stdc++.h>
#include<iostream>
#include<welcome.h>
#include<QDebug>
#include<QDate>
#include<login.h>
using namespace std;

SignIn::SignIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);

   // QDialog::showMaximized();
}

SignIn::~SignIn()
{
    delete ui;
}

void SignIn::on_pushButton_clicked()
{
    int EmailPosition = 0, PassPosition = 0, EmailMatched = 0, PassMatched = 0;
    QFile userfile("D:/Qt/Story Minder/User/User.txt");
    if(!userfile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this,"Warning","File not Opened!");
    }


    QString Email= ui->LineEdit_email->text();
    QString Password = ui->LineEdit_passwrod->text();

    QTextStream Stream(&userfile);
    QString line_email;
    do
    {
        line_email = Stream.readLine();
        EmailPosition++;
        qDebug()<< "ab" << qPrintable(line_email) << "cd";
        if(line_email.contains(Email))
        {
            EmailMatched = 1;
            cout<<"Email matched"<<endl;
            cout <<"Email " <<EmailPosition << endl;
            break;
        }
    }
    while (!line_email.isNull());
    if(EmailMatched == 1)
    {
        QString line_pass;
        do
        {
            line_pass = Stream.readLine();
            qDebug()<< "ef" << qPrintable(line_pass) << "gh";
            PassPosition++;
            cout<<"passposition "<<PassPosition<<endl;
            //cout<<line_pass.contains(Password)<<endl;
            if(line_pass.contains(Password))
            {
                PassMatched = 1;
                cout<<"Pass matched"<<endl;
                cout <<"Pass "<< PassPosition << endl;
                break;
            }
        }
        while (!line_pass.isNull());
    }
    if(EmailMatched==0)
    {
        QMessageBox::warning(this,"Error message","Email does not match.Please check again.If you do not have an account Sign Up Frist.");
    }
    else if(PassMatched==0 || PassPosition > 2){
        QMessageBox::warning(this,"Error message","Your email or password is wrong!!!");
    }
    else if(PassMatched==1 && PassPosition==2)
    {
        cout << "Log in successful" << endl;

        hide();
        Welcome welcome;
        welcome.setModal(true);
        welcome.exec();
    }
}

void SignIn::on_pushButton_2_clicked()
{
    hide();
    Login login;
    login.setModal(true);
    login.exec();

}
