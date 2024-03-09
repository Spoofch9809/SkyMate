/********************************************************************************
** Form generated from reading UI file 'mymap.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAP_H
#define UI_MYMAP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myMap
{
public:
    QFrame *Right;
    QFrame *city_widget_4;
    QLabel *city_name_4;
    QLabel *city_icon_4;
    QLabel *temperature_label_5;
    QLabel *map_icon_4;
    QFrame *city_widget;
    QLabel *city_name;
    QLabel *city_icon;
    QLabel *temperature_label_2;
    QLabel *map_icon;
    QFrame *city_widget_3;
    QLabel *city_name_3;
    QLabel *city_icon_3;
    QLabel *temperature_label_4;
    QLabel *map_icon_3;
    QFrame *city_widget_2;
    QLabel *city_name_2;
    QLabel *city_icon_2;
    QLabel *temperature_label_3;
    QLabel *map_icon_2;
    QFrame *Left;
    QPushButton *Home_button;
    QPushButton *Search_button;
    QPushButton *Map_button;
    QPushButton *Setting_button;
    QPushButton *Dashboard_button;
    QFrame *Middle;
    QComboBox *comboBox;

    void setupUi(QDialog *myMap)
    {
        if (myMap->objectName().isEmpty())
            myMap->setObjectName("myMap");
        myMap->resize(1064, 640);
        myMap->setMinimumSize(QSize(1064, 640));
        myMap->setStyleSheet(QString::fromUtf8("background-color: rgb(20, 20, 20);"));
        Right = new QFrame(myMap);
        Right->setObjectName("Right");
        Right->setGeometry(QRect(596, 10, 460, 616));
        Right->setMaximumSize(QSize(475, 16777215));
        Right->setFrameShape(QFrame::NoFrame);
        Right->setFrameShadow(QFrame::Raised);
        city_widget_4 = new QFrame(Right);
        city_widget_4->setObjectName("city_widget_4");
        city_widget_4->setGeometry(QRect(0, 460, 441, 111));
        city_widget_4->setMouseTracking(true);
        city_widget_4->setTabletTracking(true);
        city_widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"border-radius: 10px;"));
        city_name_4 = new QLabel(city_widget_4);
        city_name_4->setObjectName("city_name_4");
        city_name_4->setGeometry(QRect(120, 40, 161, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(24);
        city_name_4->setFont(font);
        city_name_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        city_icon_4 = new QLabel(city_widget_4);
        city_icon_4->setObjectName("city_icon_4");
        city_icon_4->setGeometry(QRect(30, 20, 71, 71));
        city_icon_4->setScaledContents(true);
        temperature_label_5 = new QLabel(city_widget_4);
        temperature_label_5->setObjectName("temperature_label_5");
        temperature_label_5->setGeometry(QRect(330, 50, 81, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(25);
        font1.setBold(true);
        temperature_label_5->setFont(font1);
        temperature_label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temperature_label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        map_icon_4 = new QLabel(city_widget_4);
        map_icon_4->setObjectName("map_icon_4");
        map_icon_4->setGeometry(QRect(220, 30, 21, 21));
        map_icon_4->setPixmap(QPixmap(QString::fromUtf8("../Icons/map.png")));
        map_icon_4->setScaledContents(true);
        city_widget = new QFrame(Right);
        city_widget->setObjectName("city_widget");
        city_widget->setGeometry(QRect(0, 70, 441, 111));
        city_widget->setMouseTracking(true);
        city_widget->setTabletTracking(true);
        city_widget->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"border-radius: 10px;"));
        city_name = new QLabel(city_widget);
        city_name->setObjectName("city_name");
        city_name->setGeometry(QRect(120, 40, 161, 41));
        city_name->setFont(font);
        city_name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        city_icon = new QLabel(city_widget);
        city_icon->setObjectName("city_icon");
        city_icon->setGeometry(QRect(30, 20, 71, 71));
        city_icon->setScaledContents(true);
        temperature_label_2 = new QLabel(city_widget);
        temperature_label_2->setObjectName("temperature_label_2");
        temperature_label_2->setGeometry(QRect(330, 50, 81, 20));
        temperature_label_2->setFont(font1);
        temperature_label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temperature_label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        map_icon = new QLabel(city_widget);
        map_icon->setObjectName("map_icon");
        map_icon->setGeometry(QRect(220, 30, 21, 21));
        map_icon->setPixmap(QPixmap(QString::fromUtf8("../Icons/map.png")));
        map_icon->setScaledContents(true);
        city_widget_3 = new QFrame(Right);
        city_widget_3->setObjectName("city_widget_3");
        city_widget_3->setGeometry(QRect(0, 330, 441, 111));
        city_widget_3->setMouseTracking(true);
        city_widget_3->setTabletTracking(true);
        city_widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"border-radius: 10px;"));
        city_name_3 = new QLabel(city_widget_3);
        city_name_3->setObjectName("city_name_3");
        city_name_3->setGeometry(QRect(120, 40, 161, 41));
        city_name_3->setFont(font);
        city_name_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        city_icon_3 = new QLabel(city_widget_3);
        city_icon_3->setObjectName("city_icon_3");
        city_icon_3->setGeometry(QRect(30, 20, 71, 71));
        city_icon_3->setScaledContents(true);
        temperature_label_4 = new QLabel(city_widget_3);
        temperature_label_4->setObjectName("temperature_label_4");
        temperature_label_4->setGeometry(QRect(330, 50, 81, 20));
        temperature_label_4->setFont(font1);
        temperature_label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temperature_label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        map_icon_3 = new QLabel(city_widget_3);
        map_icon_3->setObjectName("map_icon_3");
        map_icon_3->setGeometry(QRect(220, 30, 21, 21));
        map_icon_3->setPixmap(QPixmap(QString::fromUtf8("../Icons/map.png")));
        map_icon_3->setScaledContents(true);
        city_widget_2 = new QFrame(Right);
        city_widget_2->setObjectName("city_widget_2");
        city_widget_2->setGeometry(QRect(0, 200, 441, 111));
        city_widget_2->setMouseTracking(true);
        city_widget_2->setTabletTracking(true);
        city_widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"border-radius: 10px;"));
        city_name_2 = new QLabel(city_widget_2);
        city_name_2->setObjectName("city_name_2");
        city_name_2->setGeometry(QRect(120, 40, 161, 41));
        city_name_2->setFont(font);
        city_name_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        city_icon_2 = new QLabel(city_widget_2);
        city_icon_2->setObjectName("city_icon_2");
        city_icon_2->setGeometry(QRect(30, 20, 71, 71));
        city_icon_2->setScaledContents(true);
        temperature_label_3 = new QLabel(city_widget_2);
        temperature_label_3->setObjectName("temperature_label_3");
        temperature_label_3->setGeometry(QRect(330, 50, 81, 20));
        temperature_label_3->setFont(font1);
        temperature_label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temperature_label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        map_icon_2 = new QLabel(city_widget_2);
        map_icon_2->setObjectName("map_icon_2");
        map_icon_2->setGeometry(QRect(220, 30, 21, 21));
        map_icon_2->setPixmap(QPixmap(QString::fromUtf8("../Icons/map.png")));
        map_icon_2->setScaledContents(true);
        Left = new QFrame(myMap);
        Left->setObjectName("Left");
        Left->setGeometry(QRect(4, 10, 100, 616));
        Left->setMaximumSize(QSize(100, 16777215));
        Left->setFrameShape(QFrame::NoFrame);
        Left->setFrameShadow(QFrame::Raised);
        Home_button = new QPushButton(Left);
        Home_button->setObjectName("Home_button");
        Home_button->setGeometry(QRect(20, 50, 81, 81));
        Home_button->setMinimumSize(QSize(50, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        Home_button->setFont(font2);
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
        Search_button->setFont(font2);
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
        Map_button->setFont(font2);
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
        Setting_button->setFont(font2);
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
        Dashboard_button->setFont(font2);
        Dashboard_button->setCursor(QCursor(Qt::OpenHandCursor));
        Dashboard_button->setLayoutDirection(Qt::LeftToRight);
        Dashboard_button->setAutoFillBackground(false);
        Dashboard_button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../Icons/dashboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dashboard_button->setIcon(icon4);
        Dashboard_button->setIconSize(QSize(30, 30));
        Dashboard_button->setFlat(true);
        Middle = new QFrame(myMap);
        Middle->setObjectName("Middle");
        Middle->setGeometry(QRect(120, 10, 460, 616));
        Middle->setMaximumSize(QSize(475, 16777215));
        Middle->setStyleSheet(QString::fromUtf8(""));
        comboBox = new QComboBox(Middle);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(0, 10, 461, 21));
        comboBox->setMaximumSize(QSize(16777215, 16777215));
        comboBox->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"color: rgb(97, 97, 97);"));
        comboBox->setEditable(true);

        retranslateUi(myMap);

        QMetaObject::connectSlotsByName(myMap);
    } // setupUi

    void retranslateUi(QDialog *myMap)
    {
        myMap->setWindowTitle(QCoreApplication::translate("myMap", "Dialog", nullptr));
        city_name_4->setText(QCoreApplication::translate("myMap", "City4", nullptr));
        city_icon_4->setText(QString());
        temperature_label_5->setText(QCoreApplication::translate("myMap", "N/A", nullptr));
        map_icon_4->setText(QString());
        city_name->setText(QCoreApplication::translate("myMap", "City1", nullptr));
        city_icon->setText(QString());
        temperature_label_2->setText(QCoreApplication::translate("myMap", "N/A", nullptr));
        map_icon->setText(QString());
        city_name_3->setText(QCoreApplication::translate("myMap", "City3", nullptr));
        city_icon_3->setText(QString());
        temperature_label_4->setText(QCoreApplication::translate("myMap", "N/A", nullptr));
        map_icon_3->setText(QString());
        city_name_2->setText(QCoreApplication::translate("myMap", "City2", nullptr));
        city_icon_2->setText(QString());
        temperature_label_3->setText(QCoreApplication::translate("myMap", "N/A", nullptr));
        map_icon_2->setText(QString());
#if QT_CONFIG(tooltip)
        Home_button->setToolTip(QCoreApplication::translate("myMap", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Home_button->setText(QString());
#if QT_CONFIG(tooltip)
        Search_button->setToolTip(QCoreApplication::translate("myMap", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Search_button->setText(QString());
#if QT_CONFIG(tooltip)
        Map_button->setToolTip(QCoreApplication::translate("myMap", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Map_button->setText(QString());
#if QT_CONFIG(tooltip)
        Setting_button->setToolTip(QCoreApplication::translate("myMap", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Setting_button->setText(QString());
#if QT_CONFIG(tooltip)
        Dashboard_button->setToolTip(QCoreApplication::translate("myMap", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Dashboard_button->setText(QString());
        comboBox->setCurrentText(QString());
        comboBox->setPlaceholderText(QCoreApplication::translate("myMap", "Enter Location (ex. Bangkok)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myMap: public Ui_myMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAP_H
