/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QFrame *Left;
    QPushButton *Home_button;
    QPushButton *Search_button;
    QPushButton *Map_button;
    QPushButton *Setting_button;
    QPushButton *Dashboard_button;
    QFrame *Right;
    QFrame *todayprediction_frame;
    QLabel *todaysWeather_label;
    QLabel *weathericon_indicator_at_six;
    QLabel *weathericon_indicator_at_nine;
    QLabel *weathericon_indicator_at_twelve;
    QLabel *timeat6am;
    QLabel *temperatureatsix;
    QLabel *timeat9am;
    QLabel *temperatureatnine;
    QLabel *timeat12pm;
    QLabel *temperatureattwelve;
    QFrame *fiveday_frame;
    QLabel *sevenDay_label;
    QLabel *today_label;
    QLabel *tomorrow_label;
    QLabel *secondday_label;
    QLabel *today_icon;
    QLabel *tomorrow_icon;
    QLabel *secondday_icon;
    QLabel *today_description;
    QLabel *tomorrow_description;
    QLabel *secondday_description;
    QLabel *highlow_label;
    QLabel *today_temp;
    QLabel *tomorrow_temp;
    QLabel *secondday_temp;
    QLabel *location_label;
    QLabel *temperature_label;
    QLabel *weathericon_indicator;
    QFrame *Middle;
    QComboBox *comboBox;
    QFrame *city_widget;
    QLabel *city_name;
    QLabel *city_icon;
    QLabel *temperature_label_2;
    QLabel *map_icon;
    QFrame *city_widget_2;
    QLabel *city_name_2;
    QLabel *city_icon_2;
    QLabel *temperature_label_3;
    QLabel *map_icon_2;
    QFrame *city_widget_3;
    QLabel *city_name_3;
    QLabel *city_icon_3;
    QLabel *temperature_label_4;
    QLabel *map_icon_3;
    QFrame *city_widget_4;
    QLabel *city_name_4;
    QLabel *city_icon_4;
    QLabel *temperature_label_5;
    QLabel *map_icon_4;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName("Search");
        Search->resize(1064, 640);
        Search->setMinimumSize(QSize(1064, 640));
        Left = new QFrame(Search);
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
        Right = new QFrame(Search);
        Right->setObjectName("Right");
        Right->setGeometry(QRect(596, 10, 460, 616));
        Right->setMaximumSize(QSize(475, 16777215));
        Right->setFrameShape(QFrame::NoFrame);
        Right->setFrameShadow(QFrame::Raised);
        todayprediction_frame = new QFrame(Right);
        todayprediction_frame->setObjectName("todayprediction_frame");
        todayprediction_frame->setGeometry(QRect(10, 240, 441, 161));
        todayprediction_frame->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"border-radius: 10px;"));
        todayprediction_frame->setFrameShape(QFrame::StyledPanel);
        todayprediction_frame->setFrameShadow(QFrame::Raised);
        todaysWeather_label = new QLabel(todayprediction_frame);
        todaysWeather_label->setObjectName("todaysWeather_label");
        todaysWeather_label->setGeometry(QRect(30, 20, 181, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        todaysWeather_label->setFont(font1);
        todaysWeather_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        weathericon_indicator_at_six = new QLabel(todayprediction_frame);
        weathericon_indicator_at_six->setObjectName("weathericon_indicator_at_six");
        weathericon_indicator_at_six->setGeometry(QRect(70, 70, 51, 51));
        weathericon_indicator_at_six->setPixmap(QPixmap(QString::fromUtf8("../Icons/cloudymigthrain_icon.png")));
        weathericon_indicator_at_six->setScaledContents(true);
        weathericon_indicator_at_nine = new QLabel(todayprediction_frame);
        weathericon_indicator_at_nine->setObjectName("weathericon_indicator_at_nine");
        weathericon_indicator_at_nine->setGeometry(QRect(200, 70, 51, 51));
        weathericon_indicator_at_nine->setScaledContents(true);
        weathericon_indicator_at_twelve = new QLabel(todayprediction_frame);
        weathericon_indicator_at_twelve->setObjectName("weathericon_indicator_at_twelve");
        weathericon_indicator_at_twelve->setGeometry(QRect(320, 70, 51, 51));
        weathericon_indicator_at_twelve->setPixmap(QPixmap(QString::fromUtf8("../Icons/sun_869869.png")));
        weathericon_indicator_at_twelve->setScaledContents(true);
        timeat6am = new QLabel(todayprediction_frame);
        timeat6am->setObjectName("timeat6am");
        timeat6am->setGeometry(QRect(70, 50, 61, 16));
        timeat6am->setFont(font1);
        timeat6am->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temperatureatsix = new QLabel(todayprediction_frame);
        temperatureatsix->setObjectName("temperatureatsix");
        temperatureatsix->setGeometry(QRect(80, 130, 41, 16));
        temperatureatsix->setFont(font1);
        temperatureatsix->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        timeat9am = new QLabel(todayprediction_frame);
        timeat9am->setObjectName("timeat9am");
        timeat9am->setGeometry(QRect(200, 50, 61, 16));
        timeat9am->setFont(font1);
        timeat9am->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temperatureatnine = new QLabel(todayprediction_frame);
        temperatureatnine->setObjectName("temperatureatnine");
        temperatureatnine->setGeometry(QRect(210, 130, 41, 16));
        temperatureatnine->setFont(font1);
        temperatureatnine->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        timeat12pm = new QLabel(todayprediction_frame);
        timeat12pm->setObjectName("timeat12pm");
        timeat12pm->setGeometry(QRect(320, 50, 61, 16));
        timeat12pm->setFont(font1);
        timeat12pm->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temperatureattwelve = new QLabel(todayprediction_frame);
        temperatureattwelve->setObjectName("temperatureattwelve");
        temperatureattwelve->setGeometry(QRect(330, 130, 41, 16));
        temperatureattwelve->setFont(font1);
        temperatureattwelve->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        fiveday_frame = new QFrame(Right);
        fiveday_frame->setObjectName("fiveday_frame");
        fiveday_frame->setGeometry(QRect(10, 410, 441, 191));
        fiveday_frame->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"border-radius: 10px;\n"
""));
        fiveday_frame->setFrameShape(QFrame::StyledPanel);
        fiveday_frame->setFrameShadow(QFrame::Raised);
        sevenDay_label = new QLabel(fiveday_frame);
        sevenDay_label->setObjectName("sevenDay_label");
        sevenDay_label->setGeometry(QRect(30, 20, 181, 16));
        sevenDay_label->setFont(font1);
        sevenDay_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        today_label = new QLabel(fiveday_frame);
        today_label->setObjectName("today_label");
        today_label->setGeometry(QRect(30, 70, 81, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setBold(false);
        today_label->setFont(font2);
        today_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tomorrow_label = new QLabel(fiveday_frame);
        tomorrow_label->setObjectName("tomorrow_label");
        tomorrow_label->setGeometry(QRect(30, 110, 71, 16));
        tomorrow_label->setFont(font2);
        tomorrow_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        secondday_label = new QLabel(fiveday_frame);
        secondday_label->setObjectName("secondday_label");
        secondday_label->setGeometry(QRect(30, 150, 71, 16));
        secondday_label->setFont(font2);
        secondday_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        today_icon = new QLabel(fiveday_frame);
        today_icon->setObjectName("today_icon");
        today_icon->setGeometry(QRect(150, 60, 31, 31));
        today_icon->setPixmap(QPixmap(QString::fromUtf8("../Icons/sun_869869.png")));
        today_icon->setScaledContents(true);
        tomorrow_icon = new QLabel(fiveday_frame);
        tomorrow_icon->setObjectName("tomorrow_icon");
        tomorrow_icon->setGeometry(QRect(150, 100, 31, 31));
        tomorrow_icon->setScaledContents(true);
        secondday_icon = new QLabel(fiveday_frame);
        secondday_icon->setObjectName("secondday_icon");
        secondday_icon->setGeometry(QRect(150, 140, 31, 31));
        secondday_icon->setScaledContents(true);
        today_description = new QLabel(fiveday_frame);
        today_description->setObjectName("today_description");
        today_description->setGeometry(QRect(250, 68, 71, 25));
        today_description->setFont(font1);
        today_description->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tomorrow_description = new QLabel(fiveday_frame);
        tomorrow_description->setObjectName("tomorrow_description");
        tomorrow_description->setGeometry(QRect(250, 108, 71, 25));
        tomorrow_description->setFont(font1);
        tomorrow_description->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        secondday_description = new QLabel(fiveday_frame);
        secondday_description->setObjectName("secondday_description");
        secondday_description->setGeometry(QRect(250, 148, 71, 25));
        secondday_description->setFont(font1);
        secondday_description->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        highlow_label = new QLabel(fiveday_frame);
        highlow_label->setObjectName("highlow_label");
        highlow_label->setGeometry(QRect(310, 20, 91, 20));
        highlow_label->setFont(font1);
        highlow_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        highlow_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        today_temp = new QLabel(fiveday_frame);
        today_temp->setObjectName("today_temp");
        today_temp->setGeometry(QRect(340, 70, 61, 20));
        today_temp->setFont(font2);
        today_temp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        today_temp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tomorrow_temp = new QLabel(fiveday_frame);
        tomorrow_temp->setObjectName("tomorrow_temp");
        tomorrow_temp->setGeometry(QRect(340, 110, 61, 20));
        tomorrow_temp->setFont(font2);
        tomorrow_temp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tomorrow_temp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        secondday_temp = new QLabel(fiveday_frame);
        secondday_temp->setObjectName("secondday_temp");
        secondday_temp->setGeometry(QRect(340, 150, 61, 20));
        secondday_temp->setFont(font2);
        secondday_temp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        secondday_temp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        location_label = new QLabel(Right);
        location_label->setObjectName("location_label");
        location_label->setGeometry(QRect(20, 80, 191, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font3.setPointSize(28);
        font3.setBold(true);
        font3.setKerning(true);
        location_label->setFont(font3);
        location_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        location_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        temperature_label = new QLabel(Right);
        temperature_label->setObjectName("temperature_label");
        temperature_label->setGeometry(QRect(20, 170, 261, 51));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(36);
        font4.setBold(true);
        temperature_label->setFont(font4);
        temperature_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temperature_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        weathericon_indicator = new QLabel(Right);
        weathericon_indicator->setObjectName("weathericon_indicator");
        weathericon_indicator->setGeometry(QRect(310, 90, 131, 131));
        weathericon_indicator->setPixmap(QPixmap(QString::fromUtf8("../Icons/sun_869869.png")));
        weathericon_indicator->setScaledContents(true);
        Middle = new QFrame(Search);
        Middle->setObjectName("Middle");
        Middle->setGeometry(QRect(120, 10, 460, 616));
        Middle->setMaximumSize(QSize(475, 16777215));
        comboBox = new QComboBox(Middle);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(0, 10, 461, 21));
        comboBox->setMaximumSize(QSize(16777215, 16777215));
        comboBox->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(0, 0, 0);\n"
"selection-color: rgb(0, 0, 0);\n"
"color: rgb(97, 97, 97);"));
        comboBox->setEditable(true);
        city_widget = new QFrame(Middle);
        city_widget->setObjectName("city_widget");
        city_widget->setGeometry(QRect(10, 70, 441, 111));
        city_widget->setMouseTracking(true);
        city_widget->setTabletTracking(true);
        city_widget->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"border-radius: 10px;"));
        city_name = new QLabel(city_widget);
        city_name->setObjectName("city_name");
        city_name->setGeometry(QRect(120, 40, 161, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(24);
        city_name->setFont(font5);
        city_name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        city_icon = new QLabel(city_widget);
        city_icon->setObjectName("city_icon");
        city_icon->setGeometry(QRect(30, 20, 71, 71));
        city_icon->setScaledContents(true);
        temperature_label_2 = new QLabel(city_widget);
        temperature_label_2->setObjectName("temperature_label_2");
        temperature_label_2->setGeometry(QRect(330, 50, 81, 20));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Arial")});
        font6.setPointSize(25);
        font6.setBold(true);
        temperature_label_2->setFont(font6);
        temperature_label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temperature_label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        map_icon = new QLabel(city_widget);
        map_icon->setObjectName("map_icon");
        map_icon->setGeometry(QRect(220, 30, 21, 21));
        map_icon->setPixmap(QPixmap(QString::fromUtf8("../Icons/map.png")));
        map_icon->setScaledContents(true);
        city_widget_2 = new QFrame(Middle);
        city_widget_2->setObjectName("city_widget_2");
        city_widget_2->setGeometry(QRect(10, 200, 441, 111));
        city_widget_2->setMouseTracking(true);
        city_widget_2->setTabletTracking(true);
        city_widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"border-radius: 10px;"));
        city_name_2 = new QLabel(city_widget_2);
        city_name_2->setObjectName("city_name_2");
        city_name_2->setGeometry(QRect(120, 40, 161, 41));
        city_name_2->setFont(font5);
        city_name_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        city_icon_2 = new QLabel(city_widget_2);
        city_icon_2->setObjectName("city_icon_2");
        city_icon_2->setGeometry(QRect(30, 20, 71, 71));
        city_icon_2->setScaledContents(true);
        temperature_label_3 = new QLabel(city_widget_2);
        temperature_label_3->setObjectName("temperature_label_3");
        temperature_label_3->setGeometry(QRect(330, 50, 81, 20));
        temperature_label_3->setFont(font6);
        temperature_label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temperature_label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        map_icon_2 = new QLabel(city_widget_2);
        map_icon_2->setObjectName("map_icon_2");
        map_icon_2->setGeometry(QRect(220, 30, 21, 21));
        map_icon_2->setPixmap(QPixmap(QString::fromUtf8("../Icons/map.png")));
        map_icon_2->setScaledContents(true);
        city_widget_3 = new QFrame(Middle);
        city_widget_3->setObjectName("city_widget_3");
        city_widget_3->setGeometry(QRect(10, 330, 441, 111));
        city_widget_3->setMouseTracking(true);
        city_widget_3->setTabletTracking(true);
        city_widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"border-radius: 10px;"));
        city_name_3 = new QLabel(city_widget_3);
        city_name_3->setObjectName("city_name_3");
        city_name_3->setGeometry(QRect(120, 40, 161, 41));
        city_name_3->setFont(font5);
        city_name_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        city_icon_3 = new QLabel(city_widget_3);
        city_icon_3->setObjectName("city_icon_3");
        city_icon_3->setGeometry(QRect(30, 20, 71, 71));
        city_icon_3->setScaledContents(true);
        temperature_label_4 = new QLabel(city_widget_3);
        temperature_label_4->setObjectName("temperature_label_4");
        temperature_label_4->setGeometry(QRect(330, 50, 81, 20));
        temperature_label_4->setFont(font6);
        temperature_label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temperature_label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        map_icon_3 = new QLabel(city_widget_3);
        map_icon_3->setObjectName("map_icon_3");
        map_icon_3->setGeometry(QRect(220, 30, 21, 21));
        map_icon_3->setPixmap(QPixmap(QString::fromUtf8("../Icons/map.png")));
        map_icon_3->setScaledContents(true);
        city_widget_4 = new QFrame(Middle);
        city_widget_4->setObjectName("city_widget_4");
        city_widget_4->setGeometry(QRect(10, 460, 441, 111));
        city_widget_4->setMouseTracking(true);
        city_widget_4->setTabletTracking(true);
        city_widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(53, 53, 53);\n"
"border-radius: 10px;"));
        city_name_4 = new QLabel(city_widget_4);
        city_name_4->setObjectName("city_name_4");
        city_name_4->setGeometry(QRect(120, 40, 161, 41));
        city_name_4->setFont(font5);
        city_name_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        city_icon_4 = new QLabel(city_widget_4);
        city_icon_4->setObjectName("city_icon_4");
        city_icon_4->setGeometry(QRect(30, 20, 71, 71));
        city_icon_4->setScaledContents(true);
        temperature_label_5 = new QLabel(city_widget_4);
        temperature_label_5->setObjectName("temperature_label_5");
        temperature_label_5->setGeometry(QRect(330, 50, 81, 20));
        temperature_label_5->setFont(font6);
        temperature_label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        temperature_label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        map_icon_4 = new QLabel(city_widget_4);
        map_icon_4->setObjectName("map_icon_4");
        map_icon_4->setGeometry(QRect(220, 30, 21, 21));
        map_icon_4->setPixmap(QPixmap(QString::fromUtf8("../Icons/map.png")));
        map_icon_4->setScaledContents(true);

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QCoreApplication::translate("Search", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        Home_button->setToolTip(QCoreApplication::translate("Search", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Home_button->setText(QString());
#if QT_CONFIG(tooltip)
        Search_button->setToolTip(QCoreApplication::translate("Search", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Search_button->setText(QString());
#if QT_CONFIG(tooltip)
        Map_button->setToolTip(QCoreApplication::translate("Search", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Map_button->setText(QString());
#if QT_CONFIG(tooltip)
        Setting_button->setToolTip(QCoreApplication::translate("Search", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Setting_button->setText(QString());
#if QT_CONFIG(tooltip)
        Dashboard_button->setToolTip(QCoreApplication::translate("Search", "access for interactive map", nullptr));
#endif // QT_CONFIG(tooltip)
        Dashboard_button->setText(QString());
        todaysWeather_label->setText(QCoreApplication::translate("Search", "Today's Weather Prediciton", nullptr));
        weathericon_indicator_at_six->setText(QString());
        weathericon_indicator_at_nine->setText(QString());
        weathericon_indicator_at_twelve->setText(QString());
        timeat6am->setText(QCoreApplication::translate("Search", "6:00 AM", nullptr));
        temperatureatsix->setText(QCoreApplication::translate("Search", "25\302\260c", nullptr));
        timeat9am->setText(QCoreApplication::translate("Search", "9:00 AM", nullptr));
        temperatureatnine->setText(QCoreApplication::translate("Search", "25\302\260c", nullptr));
        timeat12pm->setText(QCoreApplication::translate("Search", "12:00 PM", nullptr));
        temperatureattwelve->setText(QCoreApplication::translate("Search", "25\302\260c", nullptr));
        sevenDay_label->setText(QCoreApplication::translate("Search", "5-Day Forecast", nullptr));
        today_label->setText(QCoreApplication::translate("Search", "Today", nullptr));
        tomorrow_label->setText(QCoreApplication::translate("Search", "Tomorrow", nullptr));
        secondday_label->setText(QCoreApplication::translate("Search", "Next-day", nullptr));
        today_icon->setText(QString());
        tomorrow_icon->setText(QString());
        secondday_icon->setText(QString());
        today_description->setText(QCoreApplication::translate("Search", "Sunny", nullptr));
        tomorrow_description->setText(QCoreApplication::translate("Search", "Sunny", nullptr));
        secondday_description->setText(QCoreApplication::translate("Search", "Sunny", nullptr));
        highlow_label->setText(QCoreApplication::translate("Search", "High/Low", nullptr));
        today_temp->setText(QCoreApplication::translate("Search", "37/21", nullptr));
        tomorrow_temp->setText(QCoreApplication::translate("Search", "37/21", nullptr));
        secondday_temp->setText(QCoreApplication::translate("Search", "37/21", nullptr));
        location_label->setText(QCoreApplication::translate("Search", "Location:", nullptr));
        temperature_label->setText(QCoreApplication::translate("Search", "Temperature:", nullptr));
        weathericon_indicator->setText(QString());
        comboBox->setCurrentText(QString());
        comboBox->setPlaceholderText(QCoreApplication::translate("Search", "Enter Location (ex. Bangkok)", nullptr));
        city_name->setText(QCoreApplication::translate("Search", "City1", nullptr));
        city_icon->setText(QString());
        temperature_label_2->setText(QCoreApplication::translate("Search", "N/A", nullptr));
        map_icon->setText(QString());
        city_name_2->setText(QCoreApplication::translate("Search", "City2", nullptr));
        city_icon_2->setText(QString());
        temperature_label_3->setText(QCoreApplication::translate("Search", "N/A", nullptr));
        map_icon_2->setText(QString());
        city_name_3->setText(QCoreApplication::translate("Search", "City3", nullptr));
        city_icon_3->setText(QString());
        temperature_label_4->setText(QCoreApplication::translate("Search", "N/A", nullptr));
        map_icon_3->setText(QString());
        city_name_4->setText(QCoreApplication::translate("Search", "City4", nullptr));
        city_icon_4->setText(QString());
        temperature_label_5->setText(QCoreApplication::translate("Search", "N/A", nullptr));
        map_icon_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
