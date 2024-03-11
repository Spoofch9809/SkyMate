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
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QFrame *Left;
    QPushButton *Home_button;
    QPushButton *Setting_button;
    QPushButton *Dashboard_button;
    QFrame *Middle;
    QCheckBox *celsius_checkBox;
    QCheckBox *fahrenheit_checkBox;
    QCheckBox *matric_checkBox;
    QCheckBox *imperial_checkBox;

    void setupUi(QDialog *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName("Setting");
        Setting->resize(1064, 640);
        Setting->setMinimumSize(QSize(1064, 640));
        Setting->setStyleSheet(QString::fromUtf8("background-color: rgb(20, 20, 20);"));
        Left = new QFrame(Setting);
        Left->setObjectName("Left");
        Left->setGeometry(QRect(4, 10, 100, 616));
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
        Middle = new QFrame(Setting);
        Middle->setObjectName("Middle");
        Middle->setGeometry(QRect(120, 10, 460, 616));
        Middle->setMaximumSize(QSize(475, 16777215));
        celsius_checkBox = new QCheckBox(Middle);
        celsius_checkBox->setObjectName("celsius_checkBox");
        celsius_checkBox->setGeometry(QRect(70, 100, 85, 20));
        celsius_checkBox->setCursor(QCursor(Qt::PointingHandCursor));
        celsius_checkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        fahrenheit_checkBox = new QCheckBox(Middle);
        fahrenheit_checkBox->setObjectName("fahrenheit_checkBox");
        fahrenheit_checkBox->setGeometry(QRect(260, 100, 85, 20));
        fahrenheit_checkBox->setCursor(QCursor(Qt::PointingHandCursor));
        fahrenheit_checkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        matric_checkBox = new QCheckBox(Middle);
        matric_checkBox->setObjectName("matric_checkBox");
        matric_checkBox->setGeometry(QRect(70, 260, 85, 20));
        matric_checkBox->setCursor(QCursor(Qt::PointingHandCursor));
        matric_checkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        imperial_checkBox = new QCheckBox(Middle);
        imperial_checkBox->setObjectName("imperial_checkBox");
        imperial_checkBox->setGeometry(QRect(270, 260, 85, 20));
        imperial_checkBox->setCursor(QCursor(Qt::PointingHandCursor));
        imperial_checkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

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
        celsius_checkBox->setText(QCoreApplication::translate("Setting", "Celsius", nullptr));
        fahrenheit_checkBox->setText(QCoreApplication::translate("Setting", "Fahrenheit", nullptr));
        matric_checkBox->setText(QCoreApplication::translate("Setting", "matric", nullptr));
        imperial_checkBox->setText(QCoreApplication::translate("Setting", "imperial", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
