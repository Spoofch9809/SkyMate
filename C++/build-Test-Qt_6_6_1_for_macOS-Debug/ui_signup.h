/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QFrame *Left;
    QLabel *signup_icon;
    QFrame *Right;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *full_name_box;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *email_box;
    QLabel *label_5;
    QLineEdit *username_box;
    QLabel *label_6;
    QLineEdit *password_box;
    QCheckBox *policy_checkBox;
    QPushButton *signup_Button;
    QPushButton *login_Button;
    QLabel *label_7;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(1064, 640);
        Signup->setMinimumSize(QSize(1064, 640));
        Signup->setStyleSheet(QString::fromUtf8("background-color: rgb(20, 20, 20);"));
        Left = new QFrame(Signup);
        Left->setObjectName("Left");
        Left->setGeometry(QRect(10, 10, 521, 616));
        Left->setMaximumSize(QSize(600, 16777215));
        signup_icon = new QLabel(Left);
        signup_icon->setObjectName("signup_icon");
        signup_icon->setGeometry(QRect(50, 100, 431, 411));
        signup_icon->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/\342\200\224Pngtree\342\200\224holi paint splash art border_7398274.png")));
        signup_icon->setScaledContents(true);
        Right = new QFrame(Signup);
        Right->setObjectName("Right");
        Right->setGeometry(QRect(530, 10, 521, 616));
        Right->setMaximumSize(QSize(600, 16777215));
        label = new QLabel(Right);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 60, 161, 51));
        QFont font;
        font.setPointSize(27);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Right);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 110, 301, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(189, 189, 189);"));
        label_2->setAlignment(Qt::AlignCenter);
        full_name_box = new QLineEdit(Right);
        full_name_box->setObjectName("full_name_box");
        full_name_box->setGeometry(QRect(40, 200, 441, 31));
        full_name_box->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-width:10px;\n"
"border-color: rgb(50, 50, 50);"));
        label_3 = new QLabel(Right);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 170, 181, 31));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(false);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(Right);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 240, 181, 31));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        email_box = new QLineEdit(Right);
        email_box->setObjectName("email_box");
        email_box->setGeometry(QRect(40, 270, 441, 31));
        email_box->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-width:10px;\n"
"border-color: rgb(50, 50, 50);"));
        label_5 = new QLabel(Right);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 310, 181, 31));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        username_box = new QLineEdit(Right);
        username_box->setObjectName("username_box");
        username_box->setGeometry(QRect(40, 340, 441, 31));
        username_box->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-width:10px;\n"
"border-color: rgb(50, 50, 50);"));
        label_6 = new QLabel(Right);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 380, 181, 31));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        password_box = new QLineEdit(Right);
        password_box->setObjectName("password_box");
        password_box->setGeometry(QRect(40, 410, 441, 31));
        password_box->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-width:10px;\n"
"border-color: rgb(50, 50, 50);"));
        policy_checkBox = new QCheckBox(Right);
        policy_checkBox->setObjectName("policy_checkBox");
        policy_checkBox->setGeometry(QRect(70, 470, 371, 20));
        policy_checkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        signup_Button = new QPushButton(Right);
        signup_Button->setObjectName("signup_Button");
        signup_Button->setGeometry(QRect(20, 500, 481, 61));
        signup_Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(126, 179, 74);"));
        login_Button = new QPushButton(Right);
        login_Button->setObjectName("login_Button");
        login_Button->setGeometry(QRect(290, 570, 51, 32));
        QFont font3;
        font3.setUnderline(true);
        login_Button->setFont(font3);
        login_Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        login_Button->setFlat(true);
        label_7 = new QLabel(Right);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(140, 570, 161, 31));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label->raise();
        label_2->raise();
        full_name_box->raise();
        label_3->raise();
        label_4->raise();
        email_box->raise();
        label_5->raise();
        username_box->raise();
        label_6->raise();
        password_box->raise();
        policy_checkBox->raise();
        signup_Button->raise();
        label_7->raise();
        login_Button->raise();

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Dialog", nullptr));
        signup_icon->setText(QString());
        label->setText(QCoreApplication::translate("Signup", "Sign up", nullptr));
        label_2->setText(QCoreApplication::translate("Signup", "Enter your details to get started with SkyMate", nullptr));
        full_name_box->setPlaceholderText(QCoreApplication::translate("Signup", "Your Full Name", nullptr));
        label_3->setText(QCoreApplication::translate("Signup", "Please provide your fullname", nullptr));
        label_4->setText(QCoreApplication::translate("Signup", "Email", nullptr));
        email_box->setPlaceholderText(QCoreApplication::translate("Signup", "Enter your email address", nullptr));
        label_5->setText(QCoreApplication::translate("Signup", "Username", nullptr));
        username_box->setPlaceholderText(QCoreApplication::translate("Signup", "Create a username ex. manunited", nullptr));
        label_6->setText(QCoreApplication::translate("Signup", "Password", nullptr));
        password_box->setPlaceholderText(QCoreApplication::translate("Signup", "Create a password ex. thebest", nullptr));
        policy_checkBox->setText(QCoreApplication::translate("Signup", "  By signing up, you agree to our Terms and Privacy Policy", nullptr));
        signup_Button->setText(QCoreApplication::translate("Signup", "Sign up", nullptr));
        login_Button->setText(QCoreApplication::translate("Signup", "Log in", nullptr));
        label_7->setText(QCoreApplication::translate("Signup", "Already have an account?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
