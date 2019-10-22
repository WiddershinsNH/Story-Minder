#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"signin.h"
#include"signup.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
