#ifndef DIARY_H
#define DIARY_H

#include <QMainWindow>

namespace Ui {
class Diary;
}

class Diary : public QMainWindow
{
    Q_OBJECT

public:
    explicit Diary(QWidget *parent = nullptr);
    ~Diary();


private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_AS_triggered();

    void on_actionPrint_triggered();

    void on_actionExit_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionFont_triggered();

    void on_actionBold_triggered(bool bold);

    void on_actionInfo_triggered();

    void on_dateEdit_userDateChanged(const QDate &date);

private:
    Ui::Diary *ui;
    QString currentFile;

};

#endif // DIARY_H
