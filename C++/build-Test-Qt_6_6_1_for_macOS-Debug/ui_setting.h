/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QGridLayout *gridLayout;
    QFrame *Left;
    QPushButton *Home_button;
    QPushButton *Setting_button;
    QPushButton *Dashboard_button;
    QPushButton *Exit_button;
    QFrame *Middle;
    QCheckBox *TempUnit_checkBox;
    QCheckBox *DistanceFormat;
    QCheckBox *FullScreen_checkBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QTextEdit *textEdit;
    QCheckBox *TimeFormat;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QFrame *Right;

    void setupUi(QDialog *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName("Setting");
        Setting->resize(1064, 640);
        Setting->setMinimumSize(QSize(1064, 640));
        Setting->setStyleSheet(QString::fromUtf8("background-color: rgb(20, 20, 20);"));
        gridLayout = new QGridLayout(Setting);
        gridLayout->setObjectName("gridLayout");
        Left = new QFrame(Setting);
        Left->setObjectName("Left");
        Left->setMaximumSize(QSize(100, 16777215));
        Left->setFrameShape(QFrame::NoFrame);
        Left->setFrameShadow(QFrame::Raised);
        Home_button = new QPushButton(Left);
        Home_button->setObjectName("Home_button");
        Home_button->setGeometry(QRect(20, 50, 81, 81));
        Home_button->setMinimumSize(QSize(50, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        Home_button->setFont(font);
        Home_button->setCursor(QCursor(Qt::OpenHandCursor));
        Home_button->setLayoutDirection(Qt::LeftToRight);
        Home_button->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Icons/Home.png"), QSize(), QIcon::Normal, QIcon::Off);
        Home_button->setIcon(icon);
        Home_button->setIconSize(QSize(60, 60));
        Home_button->setFlat(true);
        Setting_button = new QPushButton(Left);
        Setting_button->setObjectName("Setting_button");
        Setting_button->setGeometry(QRect(30, 210, 61, 51));
        Setting_button->setMinimumSize(QSize(50, 50));
        Setting_button->setFont(font);
        Setting_button->setCursor(QCursor(Qt::OpenHandCursor));
        Setting_button->setLayoutDirection(Qt::LeftToRight);
        Setting_button->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Icons/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        Setting_button->setIcon(icon1);
        Setting_button->setIconSize(QSize(25, 25));
        Setting_button->setFlat(true);
        Dashboard_button = new QPushButton(Left);
        Dashboard_button->setObjectName("Dashboard_button");
        Dashboard_button->setGeometry(QRect(30, 150, 63, 50));
        Dashboard_button->setMinimumSize(QSize(50, 50));
        Dashboard_button->setFont(font);
        Dashboard_button->setCursor(QCursor(Qt::OpenHandCursor));
        Dashboard_button->setLayoutDirection(Qt::LeftToRight);
        Dashboard_button->setAutoFillBackground(false);
        Dashboard_button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../Icons/dashboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dashboard_button->setIcon(icon2);
        Dashboard_button->setIconSize(QSize(30, 30));
        Dashboard_button->setFlat(true);
        Exit_button = new QPushButton(Left);
        Exit_button->setObjectName("Exit_button");
        Exit_button->setGeometry(QRect(30, 550, 61, 51));
        Exit_button->setMinimumSize(QSize(50, 50));
        Exit_button->setFont(font);
        Exit_button->setCursor(QCursor(Qt::OpenHandCursor));
        Exit_button->setLayoutDirection(Qt::LeftToRight);
        Exit_button->setAutoFillBackground(false);
        Exit_button->setIcon(icon1);
        Exit_button->setIconSize(QSize(25, 25));
        Exit_button->setFlat(true);

        gridLayout->addWidget(Left, 0, 0, 1, 1);

        Middle = new QFrame(Setting);
        Middle->setObjectName("Middle");
        Middle->setMaximumSize(QSize(475, 16777215));
        TempUnit_checkBox = new QCheckBox(Middle);
        TempUnit_checkBox->setObjectName("TempUnit_checkBox");
        TempUnit_checkBox->setGeometry(QRect(90, 270, 101, 40));
        TempUnit_checkBox->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"	width: 100px;\n"
"	height: 50px;\n"
"	background-color: rgba(0, 0, 0,0);\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator::checked{\n"
"	image: url(\"/Users/spoofch/Documents/Project/C++/Icons/clicked_switch.png\");\n"
"}\n"
"\n"
"QCheckBox::indicator::unchecked{\n"
"	image: url(\"/Users/spoofch/Documents/Project/C++/Icons/unclick_switch.png\");\n"
"}\n"
"\n"
"QCheckBox { background-color: rgba(0, 0, 0, 0); }"));
        DistanceFormat = new QCheckBox(Middle);
        DistanceFormat->setObjectName("DistanceFormat");
        DistanceFormat->setGeometry(QRect(90, 390, 81, 31));
        DistanceFormat->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"	width: 100px;\n"
"	height: 50px;\n"
"	background-color: rgba(0, 0, 0,0);\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator::checked{\n"
"	image: url(\"/Users/spoofch/Documents/Project/C++/Icons/clicked_switch.png\");\n"
"}\n"
"\n"
"QCheckBox::indicator::unchecked{\n"
"	image: url(\"/Users/spoofch/Documents/Project/C++/Icons/unclick_switch.png\");\n"
"}\n"
"\n"
"QCheckBox { background-color: rgba(0, 0, 0, 0); }"));
        FullScreen_checkBox = new QCheckBox(Middle);
        FullScreen_checkBox->setObjectName("FullScreen_checkBox");
        FullScreen_checkBox->setGeometry(QRect(30, 220, 171, 22));
        FullScreen_checkBox->setLayoutDirection(Qt::RightToLeft);
        FullScreen_checkBox->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"	width: 100px;\n"
"	height: 50px;\n"
"	background-color: rgba(0, 0, 0,0);\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator::checked{\n"
"	image: url(\"/Users/spoofch/Documents/Project/C++/Icons/clicked_switch.png\");\n"
"}\n"
"\n"
"QCheckBox::indicator::unchecked{\n"
"	image: url(\"/Users/spoofch/Documents/Project/C++/Icons/unclick_switch.png\");\n"
"}\n"
"\n"
"QCheckBox { \n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgba(0, 0, 0, 0); \n"
"}"));
        FullScreen_checkBox->setIconSize(QSize(32, 32));
        label = new QLabel(Middle);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 280, 49, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0,0);"));
        label_2 = new QLabel(Middle);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 280, 81, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0,0);"));
        comboBox = new QComboBox(Middle);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(30, 170, 291, 24));
        comboBox->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(Middle);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 140, 81, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0,0);"));
        textEdit = new QTextEdit(Middle);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 129, 451, 311));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"border-radius: 10px;"));
        TimeFormat = new QCheckBox(Middle);
        TimeFormat->setObjectName("TimeFormat");
        TimeFormat->setGeometry(QRect(90, 330, 101, 40));
        TimeFormat->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"	width: 100px;\n"
"	height: 50px;\n"
"	background-color: rgba(0, 0, 0,0);\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator::checked{\n"
"	image: url(\"/Users/spoofch/Documents/Project/C++/Icons/clicked_switch.png\");\n"
"}\n"
"\n"
"QCheckBox::indicator::unchecked{\n"
"	image: url(\"/Users/spoofch/Documents/Project/C++/Icons/unclick_switch.png\");\n"
"}\n"
"\n"
"QCheckBox { background-color: rgba(0, 0, 0, 0); }"));
        label_4 = new QLabel(Middle);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 340, 51, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0,0);"));
        label_5 = new QLabel(Middle);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 340, 51, 16));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0,0);"));
        label_6 = new QLabel(Middle);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 400, 61, 16));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0,0);"));
        label_7 = new QLabel(Middle);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(200, 400, 51, 16));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0,0);"));
        label_8 = new QLabel(Middle);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 250, 101, 16));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0,0);"));
        label_9 = new QLabel(Middle);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 310, 101, 16));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0,0);"));
        label_10 = new QLabel(Middle);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(30, 370, 101, 16));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0,0);"));
        textEdit->raise();
        DistanceFormat->raise();
        FullScreen_checkBox->raise();
        comboBox->raise();
        label_3->raise();
        label_2->raise();
        TempUnit_checkBox->raise();
        label->raise();
        TimeFormat->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();

        gridLayout->addWidget(Middle, 0, 1, 1, 1);

        Right = new QFrame(Setting);
        Right->setObjectName("Right");
        Right->setMaximumSize(QSize(475, 16777215));
        Right->setFrameShape(QFrame::NoFrame);
        Right->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(Right, 0, 2, 1, 1);


        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QDialog *Setting)
    {
        Setting->setWindowTitle(QCoreApplication::translate("Setting", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        Home_button->setToolTip(QCoreApplication::translate("Setting", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Home_button->setText(QString());
#if QT_CONFIG(tooltip)
        Setting_button->setToolTip(QCoreApplication::translate("Setting", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Setting_button->setText(QString());
#if QT_CONFIG(tooltip)
        Dashboard_button->setToolTip(QCoreApplication::translate("Setting", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Dashboard_button->setText(QString());
#if QT_CONFIG(tooltip)
        Exit_button->setToolTip(QCoreApplication::translate("Setting", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Exit_button->setText(QString());
        TempUnit_checkBox->setText(QString());
        DistanceFormat->setText(QString());
        FullScreen_checkBox->setText(QCoreApplication::translate("Setting", "FullScreen", nullptr));
        label->setText(QCoreApplication::translate("Setting", "Celsius", nullptr));
        label_2->setText(QCoreApplication::translate("Setting", "Fahrenheit", nullptr));
        label_3->setText(QCoreApplication::translate("Setting", "Screen Size:", nullptr));
        TimeFormat->setText(QString());
        label_4->setText(QCoreApplication::translate("Setting", "24 hours ", nullptr));
        label_5->setText(QCoreApplication::translate("Setting", "12 hours", nullptr));
        label_6->setText(QCoreApplication::translate("Setting", "Kilometers", nullptr));
        label_7->setText(QCoreApplication::translate("Setting", "Miles", nullptr));
        label_8->setText(QCoreApplication::translate("Setting", "Temperature:", nullptr));
        label_9->setText(QCoreApplication::translate("Setting", "Time-format:", nullptr));
        label_10->setText(QCoreApplication::translate("Setting", "Distance:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
