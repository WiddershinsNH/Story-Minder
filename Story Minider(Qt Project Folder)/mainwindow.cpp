#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include<QDir>
#include<QMessageBox>
#include<QTextStream>
#include"signin.h"
#include"signup.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDir dir("D:/Qt/Story Minder/User");
    if(!dir.exists()){
        //QMessageBox::warning(this,"Error Message","Could not find the path.");
        dir.mkpath("D:/Qt/Story Minder/User");
    }
    QFile file("D:/Qt/Story Minder/User/User.txt");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){
        QMessageBox::warning(this,"Warning","File not Opened!");
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    SignUp signup;
    signup.setModal(true);
    signup.exec();


}

void MainWindow::on_pushButton_signin_clicked()
{
    hide();
    SignIn signin;
    signin.setModal(true);
    signin.exec();

}
