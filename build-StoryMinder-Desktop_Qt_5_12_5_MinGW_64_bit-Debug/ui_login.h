/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label_storyminder;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_signin;
    QPushButton *pushButton_signup;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(1149, 654);
        label_storyminder = new QLabel(Login);
        label_storyminder->setObjectName(QString::fromUtf8("label_storyminder"));
        label_storyminder->setGeometry(QRect(420, 40, 211, 71));
        label_storyminder->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Magneto\";\n"
"text-decoration: underline;"));
        widget = new QWidget(Login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(280, 190, 511, 81));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_signin = new QPushButton(widget);
        pushButton_signin->setObjectName(QString::fromUtf8("pushButton_signin"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift"));
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        pushButton_signin->setFont(font);

        horizontalLayout->addWidget(pushButton_signin);

        pushButton_signup = new QPushButton(widget);
        pushButton_signup->setObjectName(QString::fromUtf8("pushButton_signup"));
        pushButton_signup->setFont(font);

        horizontalLayout->addWidget(pushButton_signup);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", nullptr));
        label_storyminder->setText(QApplication::translate("Login", "Stroy Minder", nullptr));
        pushButton_signin->setText(QApplication::translate("Login", "SIGN IN", nullptr));
        pushButton_signup->setText(QApplication::translate("Login", "SIGN UP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
