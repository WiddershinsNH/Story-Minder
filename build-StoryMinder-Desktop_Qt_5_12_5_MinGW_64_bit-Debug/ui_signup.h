/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_SignUp
{
public:
    QGroupBox *groupBox_signup;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_email;
    QLabel *label_username;
    QLabel *label_password;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *LineEdit_email;
    QLineEdit *LineEdit_username;
    QLineEdit *LineEdit_password;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(1141, 658);
        groupBox_signup = new QGroupBox(SignUp);
        groupBox_signup->setObjectName(QString::fromUtf8("groupBox_signup"));
        groupBox_signup->setGeometry(QRect(210, 80, 721, 441));
        QFont font;
        font.setFamily(QString::fromUtf8("Elephant"));
        font.setPointSize(14);
        font.setUnderline(true);
        groupBox_signup->setFont(font);
        pushButton = new QPushButton(groupBox_signup);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 330, 121, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift"));
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        layoutWidget = new QWidget(groupBox_signup);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 160, 701, 141));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_email = new QLabel(layoutWidget);
        label_email->setObjectName(QString::fromUtf8("label_email"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Bahnschrift"));
        font2.setPointSize(12);
        font2.setUnderline(false);
        label_email->setFont(font2);

        verticalLayout->addWidget(label_email);

        label_username = new QLabel(layoutWidget);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setFont(font2);

        verticalLayout->addWidget(label_username);

        label_password = new QLabel(layoutWidget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setFont(font2);

        verticalLayout->addWidget(label_password);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        LineEdit_email = new QLineEdit(layoutWidget);
        LineEdit_email->setObjectName(QString::fromUtf8("LineEdit_email"));

        verticalLayout_2->addWidget(LineEdit_email);

        LineEdit_username = new QLineEdit(layoutWidget);
        LineEdit_username->setObjectName(QString::fromUtf8("LineEdit_username"));

        verticalLayout_2->addWidget(LineEdit_username);

        LineEdit_password = new QLineEdit(layoutWidget);
        LineEdit_password->setObjectName(QString::fromUtf8("LineEdit_password"));

        verticalLayout_2->addWidget(LineEdit_password);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QApplication::translate("SignUp", "Dialog", nullptr));
        groupBox_signup->setTitle(QApplication::translate("SignUp", "SIGN UP", nullptr));
        pushButton->setText(QApplication::translate("SignUp", "SIGN UP", nullptr));
        label_email->setText(QApplication::translate("SignUp", "EMAIL", nullptr));
        label_username->setText(QApplication::translate("SignUp", "USERNAME", nullptr));
        label_password->setText(QApplication::translate("SignUp", "PASSWORD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
