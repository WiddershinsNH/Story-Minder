#include "today.h"
#include "ui_today.h"

Today::Today(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Today)
{
    ui->setupUi(this);
}

Today::~Today()
{
    delete ui;
}
