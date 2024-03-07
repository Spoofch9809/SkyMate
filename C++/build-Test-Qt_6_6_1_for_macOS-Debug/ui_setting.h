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
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QFrame *Right;
    QFrame *Left;
    QPushButton *Home_button;
    QPushButton *Search_button;
    QPushButton *Map_button;
    QPushButton *Setting_button;
    QPushButton *Dashboard_button;
    QFrame *Middle;

    void setupUi(QDialog *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName("Setting");
        Setting->resize(1064, 640);
        Setting->setMinimumSize(QSize(1064, 640));
        Right = new QFrame(Setting);
        Right->setObjectName("Right");
        Right->setGeometry(QRect(596, 10, 460, 616));
        Right->setMaximumSize(QSize(475, 16777215));
        Right->setFrameShape(QFrame::NoFrame);
        Right->setFrameShadow(QFrame::Raised);
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
        Search_button = new QPushButton(Left);
        Search_button->setObjectName("Search_button");
        Search_button->setGeometry(QRect(30, 210, 63, 50));
        Search_button->setMinimumSize(QSize(50, 50));
        Search_button->setFont(font);
        Search_button->setCursor(QCursor(Qt::OpenHandCursor));
        Search_button->setLayoutDirection(Qt::LeftToRight);
        Search_button->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../Icons/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        Search_button->setIcon(icon1);
        Search_button->setIconSize(QSize(30, 30));
        Search_button->setFlat(true);
        Map_button = new QPushButton(Left);
        Map_button->setObjectName("Map_button");
        Map_button->setGeometry(QRect(30, 270, 63, 50));
        Map_button->setMinimumSize(QSize(50, 50));
        Map_button->setFont(font);
        Map_button->setCursor(QCursor(Qt::OpenHandCursor));
        Map_button->setLayoutDirection(Qt::LeftToRight);
        Map_button->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../Icons/map.png"), QSize(), QIcon::Normal, QIcon::Off);
        Map_button->setIcon(icon2);
        Map_button->setIconSize(QSize(30, 30));
        Map_button->setFlat(true);
        Setting_button = new QPushButton(Left);
        Setting_button->setObjectName("Setting_button");
        Setting_button->setGeometry(QRect(30, 330, 61, 51));
        Setting_button->setMinimumSize(QSize(50, 50));
        Setting_button->setFont(font);
        Setting_button->setCursor(QCursor(Qt::OpenHandCursor));
        Setting_button->setLayoutDirection(Qt::LeftToRight);
        Setting_button->setAutoFillBackground(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../Icons/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        Setting_button->setIcon(icon3);
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
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../Icons/dashboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dashboard_button->setIcon(icon4);
        Dashboard_button->setIconSize(QSize(30, 30));
        Dashboard_button->setFlat(true);
        Middle = new QFrame(Setting);
        Middle->setObjectName("Middle");
        Middle->setGeometry(QRect(120, 10, 460, 616));
        Middle->setMaximumSize(QSize(475, 16777215));

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
        Search_button->setToolTip(QCoreApplication::translate("Setting", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Search_button->setText(QString());
#if QT_CONFIG(tooltip)
        Map_button->setToolTip(QCoreApplication::translate("Setting", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Map_button->setText(QString());
#if QT_CONFIG(tooltip)
        Setting_button->setToolTip(QCoreApplication::translate("Setting", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Setting_button->setText(QString());
#if QT_CONFIG(tooltip)
        Dashboard_button->setToolTip(QCoreApplication::translate("Setting", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Dashboard_button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
