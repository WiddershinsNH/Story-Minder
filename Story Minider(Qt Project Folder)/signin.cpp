#include "signin.h"
#include "ui_signin.h"
#include <QFile>
#include<QDir>
#include<QMessageBox>
#include<QTextStream>
#include<bits/stdc++.h>
#include<iostream>
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
    hide();


Welcome welcome;
welcome.setModal(true);
welcome.exec();
        /*//QString SearchEmail, SearchPass;
        ifstream UserFile;
        string line;
        int EmailPosition = 0, PassPosition = 0, EmailMatched = 0, PassMatched = 0;
        UserFile.open("D:/Qt/Story Minder/User/User.txt");
        if (!UserFile) {
            QMessageBox::warning(this,"Warning","File not Opened!");
            exit(1);
        }
         QString SearchEmail = ui->lineEdit_email->text();
         QString SearchPass = ui->lineEdit_password->text();
         size_t pos1;
        while (UserFile.good()) {
            getline(UserFile, line);
            pos1 = line.find(SearchEmail);
            EmailPosition++;
            if (pos1 != string::npos) {
                EmailMatched = 1;
                //cout << EmailPosition << endl;
            }
            if (EmailMatched == 1) {
                size_t pos2;
                while (UserFile.good()) {
                    getline(UserFile, line);
                    pos2 = line.find(SearchPass);
                    PassPosition++;
                    if (pos2 != string::npos) {
                        PassMatched = 1;
                        //cout << PassPosition << endl;
                    }
                    if (PassMatched==1 && PassPosition == 1) {
                        cout << "Log in successful" << endl;
                        break;
                    }
                }
                if (PassMatched!=1)
                {
                    cout << "Log in failed.Wrong Password." << endl;
                    break;
                }
            }
        }
        if (EmailMatched == 0)
        {
            cout << "No match found.Please check your email address again." << endl;
            cout << "If you don't have and account sign up first." << endl;
        }
    }
     if(username== "test" && password=="test")
    {

     }
     else
     {
         QMessageBox::warning(this,"SIGN IN","username or password is incorrect");

     }*/
}
