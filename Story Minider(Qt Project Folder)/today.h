#ifndef TODAY_H
#define TODAY_H

#include <QMainWindow>
#include<QFile>
#include<QFileDialog>
#include<QTextStream>
#include<QMessageBox>


namespace Ui {
class Today;
}

class Today : public QMainWindow
{
    Q_OBJECT

public:
    explicit Today(QWidget *parent = nullptr);
    ~Today();

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

private:
    Ui::Today *ui;
    QString currentFile ="";
};

#endif // TODAY_H
