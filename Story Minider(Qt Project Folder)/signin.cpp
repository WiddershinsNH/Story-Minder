#include "signin.h"
#include "ui_signin.h"
#include <QFile>
#include<QDir>
#include<QMessageBox>
#include<QTextStream>
#include<bits/stdc++.h>
#include<iostream>
#include<welcome.h>
#include<QDebug>
#include<welcome.h>
using namespace std;

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
     int EmailPosition = 0, PassPosition = 0, EmailMatched = 0, PassMatched = 0;
     QFile userfile("D:/Qt/Story Minder/User/User.txt");
     if(!userfile.open(QIODevice::ReadOnly | QIODevice::Text))
     {
         QMessageBox::warning(this,"Warning","File not Opened!");
     }


     QString Email= ui->lineEdit_email->text();
     QString Password = ui->lineEdit_password->text();

     QTextStream Stream(&userfile);
     QString line_email;
     do
     {
         line_email = Stream.readLine();
         EmailPosition++;
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
                 //qDebug()<< "abc" << qPrintable(line_pass) << "def";
                 PassPosition++;
                 //cout<<"passposition "<<PassPosition<<endl;
                 //cout<<line_pass.contains(Password)<<endl;
                 if(line_pass.contains(Password))
                 {
                     PassMatched = 1;
                     //cout<<"Pass matched"<<endl;
                     cout <<"Pass "<< PassPosition << endl;

                 }

                 if(PassMatched==1 && PassPosition == 2)
                 {
                     cout << "Log in successful" << endl;
                     hide();
                     Welcome welcome;
                     welcome.setModal(true);
                     welcome.exec();
                 }



             }
             while (!line_pass.isNull());
         }
       /* if(PassMatched==0)
       {
           cout<<"Pass wrong"<<endl;
           QMessageBox::warning(this,"Error message","Wrong Password!!!");
       }
     if (EmailMatched == 0)
     {
         cout << "No match found.Please check your email address again." << endl;
         cout << "If you don't have and account sign up first." << endl;
     }*/
}












