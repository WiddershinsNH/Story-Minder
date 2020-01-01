#include "welcome.h"
#include "ui_welcome.h"
#include<QMessageBox>
#include<QDebug>
#include<diary.h>
#include<login.h>


Welcome::Welcome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Welcome)
{
    ui->setupUi(this);

  // QDialog::showMaximized();
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_pushButton_exit_clicked()
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

void Welcome::on_pushButton_write_clicked()
{

    Diary *MainWin = new  Diary();
       MainWin->show();
       accept();
}


void Welcome::on_pushButton_logout_clicked()
{
    hide();
    Login login;
    login.setModal(true);
    login.exec();

}




