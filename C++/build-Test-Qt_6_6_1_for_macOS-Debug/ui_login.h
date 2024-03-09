/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QFrame *Right;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *username_box;
    QLabel *label_6;
    QLineEdit *password_box;
    QPushButton *login_Button;
    QPushButton *goto_signup_Button;
    QLabel *label_7;
    QFrame *Left;
    QLabel *signup_icon;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(1064, 640);
        login->setMinimumSize(QSize(1064, 640));
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(20, 20, 20);"));
        Right = new QFrame(login);
        Right->setObjectName("Right");
        Right->setGeometry(QRect(530, 10, 521, 616));
        Right->setMaximumSize(QSize(600, 16777215));
        label = new QLabel(Right);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 150, 161, 51));
        QFont font;
        font.setPointSize(27);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Right);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 200, 301, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(189, 189, 189);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(Right);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 250, 181, 31));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(false);
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        username_box = new QLineEdit(Right);
        username_box->setObjectName("username_box");
        username_box->setGeometry(QRect(40, 280, 441, 31));
        username_box->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-width:10px;\n"
"border-color: rgb(50, 50, 50);"));
        label_6 = new QLabel(Right);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 320, 181, 31));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        password_box = new QLineEdit(Right);
        password_box->setObjectName("password_box");
        password_box->setGeometry(QRect(40, 350, 441, 31));
        password_box->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-width:10px;\n"
"border-color: rgb(50, 50, 50);"));
        login_Button = new QPushButton(Right);
        login_Button->setObjectName("login_Button");
        login_Button->setGeometry(QRect(20, 410, 481, 61));
        login_Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(126, 179, 74);"));
        goto_signup_Button = new QPushButton(Right);
        goto_signup_Button->setObjectName("goto_signup_Button");
        goto_signup_Button->setGeometry(QRect(300, 490, 61, 32));
        QFont font3;
        font3.setUnderline(true);
        goto_signup_Button->setFont(font3);
        goto_signup_Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        goto_signup_Button->setFlat(true);
        label_7 = new QLabel(Right);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(160, 490, 141, 31));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label->raise();
        label_2->raise();
        label_5->raise();
        username_box->raise();
        label_6->raise();
        password_box->raise();
        login_Button->raise();
        label_7->raise();
        goto_signup_Button->raise();
        Left = new QFrame(login);
        Left->setObjectName("Left");
        Left->setGeometry(QRect(10, 10, 521, 616));
        Left->setMaximumSize(QSize(600, 16777215));
        signup_icon = new QLabel(Left);
        signup_icon->setObjectName("signup_icon");
        signup_icon->setGeometry(QRect(50, 100, 431, 411));
        signup_icon->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/signup_icon.png")));
        signup_icon->setScaledContents(true);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("login", "Log in", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Get full experience in SkyMate", nullptr));
        label_5->setText(QCoreApplication::translate("login", "Username", nullptr));
        username_box->setPlaceholderText(QCoreApplication::translate("login", "Create a username ex. manunited", nullptr));
        label_6->setText(QCoreApplication::translate("login", "Password", nullptr));
        password_box->setPlaceholderText(QCoreApplication::translate("login", "Create a password ex. thebest", nullptr));
        login_Button->setText(QCoreApplication::translate("login", "Log in", nullptr));
        goto_signup_Button->setText(QCoreApplication::translate("login", "Sign up", nullptr));
        label_7->setText(QCoreApplication::translate("login", "Don't have an account?", nullptr));
        signup_icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
