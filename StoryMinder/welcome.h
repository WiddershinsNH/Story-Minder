#ifndef WELCOME_H
#define WELCOME_H

#include <QDialog>

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
    void on_pushButton_exit_clicked();

    void on_pushButton_write_clicked();

    void on_pushButton_previous_clicked();

    void on_pushButton_logout_clicked();

    void on_pushButton_previous_windowIconChanged(const QIcon &icon);

    void on_pushButton_previous_released();

private:
    Ui::Welcome *ui;
};

#endif // WELCOME_H
