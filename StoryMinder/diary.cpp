#include "diary.h"
#include "ui_diary.h"
#include<QFile>
#include<QFileDialog>
#include<QTextStream>
#include<QMessageBox>
#include<QFont>
#include<QFontDialog>
#include<QFont>
#include<QDir>
#include<QTextStream>
#include<bits/stdc++.h>
#include<string.h>
#include<iostream>
#include<QDebug>
#include<QDate>
#include<QCoreApplication>
#include<QDirIterator>
#include<QFileDialog>
#include<QFile>
#include<welcome.h>
using namespace std;

Diary::Diary(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Diary)
{

    ui->setupUi(this);
   // QMainWindow::showMaximized();
    //this->setCentralWidget(ui->textEdit_diary);
    QString date = QDate::currentDate().toString("dd.MM.yyyy");
    //qDebug()<<qPrintable(date);
    QString Text= ".txt";
    QString File_name = date+Text;
    QString Basic = "D:/Qt/Story Minder/Stories/";
    QString Directory = Basic+File_name;
    //qDebug()<<qPrintable(File_name);
    qDebug()<<qPrintable(Directory);
    QFile userfile(Directory);
    if(!userfile.open(QIODevice::ReadOnly|QIODevice::Append))
    {
        QMessageBox::warning(this,"Warning","File not Opened!");
    }
    QFile file(Directory);
        if (file.open(QIODevice::ReadOnly)) {
            QTextStream stream(&file);
            ui->textEdit_diary->setPlainText( stream.readAll() );
        } else
            QMessageBox::warning(this, "title", "file open error:" + file.errorString() );
}
Diary::~Diary()
{
    delete ui;
}





void Diary::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(fileName);
    currentFile = fileName;
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit_diary->setText(text);
    file.close();
}

void Diary::on_actionSave_triggered()
{
    QString fileName;

    if (currentFile.isEmpty()) {
       fileName = QFileDialog::getOpenFileName(this,"","D:/Qt/Story Minder/Stories");
        currentFile = fileName;
    } else {
        fileName = currentFile;
    }
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit_diary->toPlainText();
    out << text;
    file.close();
}

void Diary::on_actionSave_AS_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save as");
    QFile file(fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit_diary->toPlainText();
    out << text;
    file.close();
}

void Diary::on_actionExit_triggered()
{
     hide();
     Welcome welcome;
     welcome.setModal(true);
     welcome.exec();
}

void Diary::on_actionCut_triggered()
{
#if QT_CONFIG(clipboard)
    ui->textEdit_diary->cut();
#endif
}

void Diary::on_actionCopy_triggered()
{
#if QT_CONFIG(clipboard)
    ui->textEdit_diary->copy();
#endif
}

void Diary::on_actionPaste_triggered()
{
#if QT_CONFIG(clipboard)
    ui->textEdit_diary->paste();
#endif
}

void Diary::on_actionUndo_triggered()
{
    ui->textEdit_diary->undo();
}

void Diary::on_actionRedo_triggered()
{
    ui->textEdit_diary->redo();
}

void Diary::on_actionFont_triggered()
{
    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected, this);
    if (fontSelected)
        ui->textEdit_diary->setFont(font);
}

void Diary::on_actionBold_triggered(bool bold)
{
    bold ? ui->textEdit_diary->setFontWeight(QFont::Bold) :
           ui->textEdit_diary->setFontWeight(QFont::Normal);
}



void Diary::on_actionInfo_triggered()
{
    QMessageBox::about(this, tr("About MDI"),
                 tr("The <b>Stroy Minder</b> This is a project for the course SWE-150'"
                    "This is a windows application built in C++"));
}

void Diary::on_dateEdit_userDateChanged(const QDate &date)
{
    QDate Predate= ui->dateEdit->date();
    QString dateString = Predate.toString("dd.MM.yyyy");
    qDebug()<<dateString;
    QString text = ".txt";
    QString File_name = dateString+text;
    qDebug()<<File_name;
    QString Basic = "D:/Qt/Story Minder/Stories/";
    QString Directory = Basic+File_name;
    //qDebug()<<qPrintable(File_name);
    qDebug()<<qPrintable(Directory);
    QFile userfile(Directory);
//    if(userfile.open(QIODevice::ReadOnly|QIODevice::Append))
//    {
//        QMessageBox::warning(this,"Warning","New File Opened!");
//    }
    QFile file(Directory);
        if (file.open(QIODevice::ReadOnly)) {
            QTextStream stream(&file);
            ui->textEdit_diary->setPlainText( stream.readAll() );
        } else
            QMessageBox::warning(this, "title", "file open error:" + file.errorString() );

}
