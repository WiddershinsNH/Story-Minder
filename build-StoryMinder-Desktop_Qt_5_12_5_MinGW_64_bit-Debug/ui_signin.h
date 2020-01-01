/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QGroupBox *groupBox_signin;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_username;
    QLabel *label_password;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_passwrod;

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QString::fromUtf8("SignIn"));
        SignIn->resize(1128, 653);
        groupBox_signin = new QGroupBox(SignIn);
        groupBox_signin->setObjectName(QString::fromUtf8("groupBox_signin"));
        groupBox_signin->setGeometry(QRect(180, 60, 661, 401));
        QFont font;
        font.setFamily(QString::fromUtf8("Elephant"));
        font.setPointSize(14);
        font.setUnderline(true);
        groupBox_signin->setFont(font);
        pushButton = new QPushButton(groupBox_signin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 290, 161, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift"));
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        widget = new QWidget(groupBox_signin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 149, 641, 101));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_username = new QLabel(widget);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Bahnschrift"));
        font2.setPointSize(12);
        font2.setUnderline(false);
        label_username->setFont(font2);

        verticalLayout->addWidget(label_username);

        label_password = new QLabel(widget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setFont(font2);

        verticalLayout->addWidget(label_password);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));

        verticalLayout_2->addWidget(lineEdit_username);

        lineEdit_passwrod = new QLineEdit(widget);
        lineEdit_passwrod->setObjectName(QString::fromUtf8("lineEdit_passwrod"));

        verticalLayout_2->addWidget(lineEdit_passwrod);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QDialog *SignIn)
    {
        SignIn->setWindowTitle(QApplication::translate("SignIn", "Dialog", nullptr));
        groupBox_signin->setTitle(QApplication::translate("SignIn", "SIGN IN", nullptr));
        pushButton->setText(QApplication::translate("SignIn", "SIGN IN", nullptr));
        label_username->setText(QApplication::translate("SignIn", "USERNAME", nullptr));
        label_password->setText(QApplication::translate("SignIn", "PASSWORD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
