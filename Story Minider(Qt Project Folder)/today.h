#ifndef TODAY_H
#define TODAY_H

#include <QDialog>

namespace Ui {
class Today;
}

class Today : public QDialog
{
    Q_OBJECT

public:
    explicit Today(QWidget *parent = nullptr);
    ~Today();

private:
    Ui::Today *ui;
};

#endif // TODAY_H
