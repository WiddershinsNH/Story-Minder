/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QLabel *label_welcome;
    QLabel *label_option;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_write;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName(QString::fromUtf8("Welcome"));
        Welcome->resize(1144, 653);
        label_welcome = new QLabel(Welcome);
        label_welcome->setObjectName(QString::fromUtf8("label_welcome"));
        label_welcome->setGeometry(QRect(440, 50, 131, 61));
        label_welcome->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Magneto\";\n"
"text-decoration: underline;"));
        label_option = new QLabel(Welcome);
        label_option->setObjectName(QString::fromUtf8("label_option"));
        label_option->setGeometry(QRect(380, 130, 281, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift"));
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_option->setFont(font);
        widget = new QWidget(Welcome);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(370, 230, 291, 101));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_write = new QPushButton(widget);
        pushButton_write->setObjectName(QString::fromUtf8("pushButton_write"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        pushButton_write->setFont(font1);

        verticalLayout->addWidget(pushButton_write);

        pushButton_exit = new QPushButton(widget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setFont(font1);

        verticalLayout->addWidget(pushButton_exit);


        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QDialog *Welcome)
    {
        Welcome->setWindowTitle(QApplication::translate("Welcome", "Dialog", nullptr));
        label_welcome->setText(QApplication::translate("Welcome", "WELCOME", nullptr));
        label_option->setText(QApplication::translate("Welcome", "What Would You Like TO DO?", nullptr));
        pushButton_write->setText(QApplication::translate("Welcome", "Write", nullptr));
        pushButton_exit->setText(QApplication::translate("Welcome", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
