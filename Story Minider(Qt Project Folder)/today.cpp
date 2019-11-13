#include "today.h"
#include "ui_today.h"

Today::Today(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Today)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit_today);
}

Today::~Today()
{
    delete ui;
}

void Today::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEdit_today->setText(QString());

}

/*void Today::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName((this,"open this file"));
    QFile file(filename);
    currentFile = filename;
    if(!file.open(QIODevice::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"File","cannot open" + file.errorString());
    }
    setWindowTitle(filename);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit_today->setText(text);
    file.close();
}

void Today::on_actionSave_triggered()
{
    QString fileName=QFileDialog::getSaveFileName(this,"save");
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this,"warning","Cannot save"+ file.errorString());
        return;
    }
    currentFile=fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text=ui->textEdit_today->toPlainText();
    out << text;
    file.close();
}*/

void Today::on_actionCopy_triggered()
{
    ui->textEdit_today->copy();
}

void Today::on_actionPaste_triggered()
{
    ui->textEdit_today->paste();
}


void Today::on_actionCut_triggered()
{
    ui->textEdit_today->cut();
}
