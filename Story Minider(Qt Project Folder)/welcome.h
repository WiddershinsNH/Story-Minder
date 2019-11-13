#ifndef WELCOME_H
#define WELCOME_H

#include <QDialog>
#include<today.h>


namespace Ui {
class Welcome;
}

class Welcome : public QDialog
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = nullptr);
    ~Welcome();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Welcome *ui;
    Today *today;

};

#endif // WELCOME_H
