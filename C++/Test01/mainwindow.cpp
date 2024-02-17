#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QPixmap>
#include <QStringList>
#include <QDateTime>

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

using namespace std;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Icons for the left widget menu bar in buttons
    ui->Home_button->setIcon(QIcon("/Users/spoofch/Documents/Project/C++/Icons/Home.png"));
    ui->Dashboard_button->setIcon(QIcon("/Users/spoofch/Documents/Project/C++/Icons/dashboard.png"));
    ui->Search_button->setIcon(QIcon("/Users/spoofch/Documents/Project/C++/Icons/search.png"));
    ui->Map_button->setIcon(QIcon("/Users/spoofch/Documents/Project/C++/Icons/map.png"));
    ui->Setting_button->setIcon(QIcon("/Users/spoofch/Documents/Project/C++/Icons/settings.png"));

    // Icons for the middle widgets in labels
    ui->uvindex_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/uvindex_icon.png"));
    ui->windspeed_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/windspeed_icon.png"));
    ui->humidity_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/humidity_icon.png"));
    ui->visibility_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/visibility_icon.png"));
    ui->feelslike_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/feelslike_icon.png"));
    ui->chanceofrain_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/chanceofrain_icon.png"));
    ui->pressure_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/pressure_icon.png"));
    ui->sunset_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sunset_icon.png"));

    // Icons in the middle widget for weathericon indicator
    ui->weathericon_indicator->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sun_icon.png"));

    // Icons in the right widget
    // today's weather widget
    ui->weathericon_indicator_at_six->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/cloudymightrain_icon.png"));
    ui->weathericon_indicator_at_nine->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/cloudy_icon.png"));
    ui->weathericon_indicator_at_twelve->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sun_icon.png"));

    // 7Day Foorecast
    ui->monday_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sun_icon.png"));
    ui->tuesday_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sun_icon.png"));
    ui->wednesday_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sun_icon.png"));
    ui->thursday_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/cloudy_icon.png"));
    ui->friday_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/cloudy_icon.png"));
    ui->saturday_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/cloudymightrain_icon.png"));
    ui->sunday_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sun_icon.png"));

    // citylist
    QStringList city_names;
    city_names << "Abidjan" << "Abu Dhabi" << "Abuja" << "Accra" << "Addis Ababa" << "Ahmedabad" << "Aleppo" << "Alexandria" << "Algiers" << "Almaty" << "Amman" << "Amsterdam" << "Anchorage" << "Andorra la Vella" << "Ankara" << "Antananarivo" << "Apia" << "Arnold" << "Ashgabat" << "Asmara" << "Asuncion" << "Athens" << "Auckland" << "Avarua" << "Baghdad" << "Baku" << "Bamako" << "Banda Aceh" << "Bandar Seri Begawan" << "Bandung" << "Bangkok" << "Bangui" << "Banjul" << "Barcelona" << "Barranquilla" << "Basrah" << "Basse-Terre" << "Basseterre" << "Beijing" << "Beirut" << "Bekasi" << "Belem" << "Belgrade" << "Belmopan" << "Belo Horizonte" << "Bengaluru" << "Berlin" << "Bern" << "Bishkek" << "Bissau" << "Bogota" << "Brasilia" << "Bratislava" << "Brazzaville" << "Bridgetown" << "Brisbane" << "Brussels" << "Bucharest" << "Budapest" << "Buenos Aires" << "Bujumbura" << "Bursa" << "Busan" <<
        "Cairo" << "Cali" << "California" << "Caloocan" << "Camayenne" << "Canberra" << "Cape Town" << "Caracas" << "Casablanca" << "Castries" << "Cayenne" << "Charlotte Amalie" << "Chengdu" << "Chennai" << "Chicago" << "Chisinau" << "Chittagong" << "Chongqing" << "Colombo" << "Conakry" << "Copenhagen" << "Cordoba" << "Curitiba" <<
        "Daegu" << "Daejeon" << "Dakar" << "Dallas" << "Damascus" << "Dar es Salaam" << "Delhi" << "Denver" << "Dhaka" << "Dili" << "Djibouti" << "Dodoma" << "Doha" << "Dongguan" << "Douala" << "Douglas" << "Dubai" << "Dublin" << "Durban" << "Dushanbe" << "Faisalabad" << "Fort-de-France" << "Fortaleza" << "Freetown" << "Fukuoka" << "Funafuti" << "Gaborone" << "George Town" << "Georgetown" << "Gibraltar" << "Gitega" << "Giza" << "Guadalajara" << "Guangzhou" << "Guatemala City" << "Guayaquil" << "Gujranwala" << "Gustavia" << "Gwangju" <<
        "Hamburg" << "Hanoi" << "Harare" << "Havana" << "Helsinki" << "Ho Chi Minh City" << "Hong Kong" << "Honiara" << "Honolulu" << "Houston" << "Hyderabad" << "Hyderabad" << "Ibadan" << "Incheon" << "Isfahan" << "Islamabad" << "Istanbul" << "Izmir" << "Jaipur" << "Jakarta" << "Jeddah" << "Jerusalem" << "Johannesburg" << "Juarez" << "Juba" <<
        "Kabul" << "Kaduna" << "Kampala" << "Kano" << "Kanpur" << "Kaohsiung" << "Karachi" << "Karaj" << "Kathmandu" << "Kawasaki" << "Kharkiv" << "Khartoum" << "Khulna" << "Kigali" << "Kingsburg" << "Kingston" << "Kingstown" << "Kinshasa" << "Kobe" << "Kolkata" << "Kota Bharu" << "Kowloon" << "Kuala Lumpur" << "Kumasi" << "Kuwait" << "Kyiv" << "Kyoto" <<
        "La Paz" << "Lagos" << "Lahore" << "Libreville" << "Lilongwe" << "Lima" << "Lisbon" << "Ljubljana" << "Lome" << "London" << "Los Angeles" << "Luanda" << "Lubumbashi" << "Lusaka" << "Luxembourg" << "Macau" << "Madrid" << "Majuro" << "Makassar" << "Malabo" << "Male" << "Mamoudzou" << "Managua" << "Manama" << "Manaus" << "Manila" << "Maputo" << "Maracaibo" << "Maracay" << "Mariehamn" << "Marigot" << "Maseru" << "Mashhad" << "Mbabane" << "Mecca" << "Medan" << "Medellin" << "Medina" << "Melbourne" << "Mexico City" << "Miami" << "Minsk" << "Mogadishu" << "Monaco" << "Monrovia" << "Montevideo" << "Montreal" << "Moroni" << "Moscow" << "Mosul" << "Multan" << "Mumbai" << "Muscat" <<
        "N'Djamena" << "Nagoya" << "Nairobi" << "Nanchong" << "Nanjing" << "Nassau" << "Nay Pyi Taw" << "New York" << "Niamey" << "Nicosia" << "Nouakchott" << "Noumea" << "Novosibirsk" << "Nuku'alofa" << "Nur-Sultan" << "Nuuk" << "Oranjestad";
    ui->comboBox->addItems(city_names);

    connect(ui->Home_button, &QPushButton::clicked, this, &MainWindow::Home_button);
    connect(ui->Dashboard_button, &QPushButton::clicked, this, &MainWindow::Dashboard_button);
    connect(ui->Search_button, &QPushButton::clicked, this, &MainWindow::Search_button);
    connect(ui->Map_button, &QPushButton::clicked, this, &MainWindow::Map_button);
    connect(ui->Setting_button, &QPushButton::clicked, this, &MainWindow::Setting_button);

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Home_button()
{
    qDebug() << "Home-Button-Clicked";
}

void MainWindow::Dashboard_button()
{
    qDebug() << "DashBoard-Button-Clicked";
}

void MainWindow::Search_button()
{
    qDebug() << "Search-Button-Clicked";
}

void MainWindow::Map_button()
{
    qDebug() << "Map-Button-Clicked";
}

void MainWindow::Setting_button()
{
    qDebug() << "Setting-Button-Clicked";
}
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
QNetworkReply* MainWindow::makeApiRequest(const QString &link)
{
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);

    // Current weather request
    QUrl currentWeatherUrl("http://api.openweathermap.org/data/2.5/weather?q=" + link + "&appid=4c2d59ca85c3178d321be386f81a3f5b");
    QNetworkRequest currentWeatherRequest(currentWeatherUrl);

    QNetworkReply *currentWeatherReply = manager->get(currentWeatherRequest);

    // Connect the finished signal for the current weather request
    connect(currentWeatherReply, &QNetworkReply::finished, this, [=]() {
        if (currentWeatherReply->error() == QNetworkReply::NoError) {
            QByteArray data = currentWeatherReply->readAll();
            QJsonDocument jsonResponse = QJsonDocument::fromJson(data);
            QJsonObject jsonObject = jsonResponse.object();
            qDebug() << data;

            // Call the function to update UI when the reply is received
            updateUIFromApiResponse(jsonObject);

            // Extract the city ID from the current weather response
            int cityId = jsonObject.value("id").toInt();

            // forecastWeather forecast request
            QUrl forecastWeatherUrl("http://api.openweathermap.org/data/2.5/forecast?id=" + QString::number(cityId) + "&appid=4c2d59ca85c3178d321be386f81a3f5b");
            QNetworkRequest forecastWeatherRequest(forecastWeatherUrl);

            QNetworkReply *forecastWeatherReply = manager->get(forecastWeatherRequest);

            // Connect the finished signal for the forecastWeather forecast request
            connect(forecastWeatherReply, &QNetworkReply::finished, this, [=]() {
                if (forecastWeatherReply->error() == QNetworkReply::NoError) {
                    QByteArray forecastWeatherData = forecastWeatherReply->readAll();
                    QJsonDocument forecastWeatherJsonResponse = QJsonDocument::fromJson(forecastWeatherData);
                    QJsonObject forecastWeatherJsonObject = forecastWeatherJsonResponse.object();
                    qDebug() << "\nforecastWeatherData(fivedays) : " << forecastWeatherData;

                    // Process the forecastWeather forecast data as needed
                    // updateUIFromforecastWeather(forecastWeatherJsonObject);
                } else {
                    qDebug() << "Error fetching forecastWeather forecast data: " << forecastWeatherReply->errorString();
                }

                // Clean up the forecastWeather forecast reply
                forecastWeatherReply->deleteLater();
            });
        }

        // Clean up the current weather reply
        currentWeatherReply->deleteLater();
    });

    return currentWeatherReply;
}

void MainWindow::updateUIFromApiResponse(const QJsonObject &jsonObject)
{
    if (!jsonObject.isEmpty()) {
        QString cityname = jsonObject["name"].toString();
        QString city_abbreviation = jsonObject["sys"].toObject()["country"].toString();
        QString description = jsonObject["weather"].toArray()[0].toObject()["description"].toString();
        double temp = jsonObject["main"].toObject()["temp"].toDouble();
        double windSpeed = jsonObject["wind"].toObject()["speed"].toDouble();
        double visibility = jsonObject["visibility"].toDouble();
        double humidity = jsonObject["main"].toObject()["humidity"].toDouble();
        double feelslike = jsonObject["main"].toObject()["feels_like"].toDouble();
        double pressure = jsonObject["main"].toObject()["pressure"].toDouble();
        double sunset = jsonObject["sys"].toObject()["sunset"].toDouble();

        // set the sunset time to human time
        qint64 sunsetTimestamp = static_cast<qint64>(sunset);
        QDateTime sunsetDateTime = QDateTime::fromSecsSinceEpoch(sunsetTimestamp);
        QString sunsetTimeString = sunsetDateTime.toString("hh:mm AP");

        qDebug() << "Location:" << cityname << "," << city_abbreviation;
        qDebug() << "Description:" << description;
        qDebug() << "Temp:" << (temp - 273.15);
        qDebug() << "Wind Speed:" << windSpeed;
        qDebug() << "Formatted Wind Speed:" << QString::number(windSpeed, 'f', 1) + " m/s";
        qDebug() << "Humidity:" << humidity << "%";
        qDebug() << "Visibility:" << visibility / 1000 << "km";
        qDebug() << "Feelslike:" << QString::number(feelslike - 273.15) + "°c";
        qDebug() << "Pressure:" << pressure << "hPa";
        qDebug() << "Sunset time:" << sunsetTimeString;

        // Update the correct UI element (windspeed label in this case)
        QString locationText = cityname + ", " + city_abbreviation;
        double temp_celsius = (temp - 273.15);
        double feelslike_celsius = (feelslike - 273.15);
        double visibility_km = visibility / 1000;
        ui->location_label->setText(locationText);
        ui->windspeed_value->setText(QString::number(windSpeed, 'f', 1) + " m/s");
        ui->humidity_value->setText(QString::number(humidity, 'f', 0) + " %");
        ui->visibility_value->setText(QString::number(visibility_km, 'f', 0) + " km");
        ui->feelslike_value->setText(QString::number(feelslike_celsius, 'f', 1) + " °c");
        ui->pressure_value->setText(QString::number(pressure, 'f', 0) + " hPa");
        ui->sunset_value->setText(sunsetTimeString);
        ui->temperature_label->setText(QString::number(temp_celsius, 'f', 0) + "°c");

        // Add code to update other UI elements with relevant weather data if needed
        // For example, update temperature, humidity, etc.
    } else {
        qDebug() << "Empty JSON object received.";
    }
}
void MainWindow::updateUIFromHourlyForecast(const QJsonObject &forecastWeatherJsonObject)
{
    qDebug() << "Entering updateUIFromHourlyForecast function\n\n\n\n";

    if (!forecastWeatherJsonObject.isEmpty()) {
        qDebug() << "Forecast data is not empty. Continuing...";

        // Process the hourly forecast data as needed
        qDebug() << "Before extracting temperature:" << forecastWeatherJsonObject["list"].toArray()[0];
        double tempAtSix = forecastWeatherJsonObject["list"].toArray()[0].toObject()["main"].toObject()["temp"].toDouble();
        qDebug() << "After extracting temperature:" << tempAtSix;

        // Update the UI for each hour, e.g., add to a chart or display in a list
        // Example: ui->hourlyTemperatureChart->addData(hourlyTemp);
    } else {
        qDebug() << "Empty hourly forecast JSON object received.";
    }

    qDebug() << "Exiting updateUIFromHourlyForecast function";
}

void MainWindow::updateUIFromFiveDayForecast(const QJsonObject &forecastWeatherJsonObject)
{
    if (!forecastWeatherJsonObject.isEmpty()) {
        // Process the five-day forecast data as needed
        // Extract relevant information from the JSON object and update the UI

        // Example: Update daily temperature values
        QJsonArray dailyList = forecastWeatherJsonObject["list"].toArray();
        for (const QJsonValue &dailyData : dailyList) {
            double dailyTemp = dailyData.toObject()["main"].toObject()["temp"].toDouble();
            // Update the UI for each day, e.g., add to a chart or display in a list
            // Example: ui->dailyTemperatureChart->addData(dailyTemp);
        }
    } else {
        qDebug() << "Empty five-day forecast JSON object received.";
    }
}

///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    QString cityName = ui->comboBox->itemText(index);

    // Fetch weather data for the selected city
    QNetworkReply *reply = makeApiRequest(cityName);

    // Connect the finished signal to a lambda function that updates the windspeed label
    connect(reply, &QNetworkReply::finished, this, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray data = reply->readAll();
            QJsonDocument jsonResponse = QJsonDocument::fromJson(data);
            QJsonObject jsonObject = jsonResponse.object();

            // Extract and display relevant information based on the API response
            updateUIFromApiResponse(jsonObject);

        } else {
            qDebug() << "Error fetching data for City " << cityName << ": " << reply->errorString();
            // Reset wind speed label to "N/A" in case of an error
            ui->windspeed_value->setText("N/A");
        }

        // Clean up the network reply
        reply->deleteLater();
    });
}
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
// void MainWindow::updateLocationLabel(QString locationText)
// {
//     if (!locationText.isEmpty()) {
//         ui->location_label->setText(locationText);
//     } else {
//         ui->location_label->setText("N/A");
//     }
// }

// void MainWindow::on_location_label_linkActivated(const QString &link)
// {
//     QNetworkReply *reply = makeApiRequest(link);

//     // Connect the finished signal to a lambda function that updates the windspeed label
//     connect(reply, &QNetworkReply::finished, this, [=]() {
//         if (reply->error() == QNetworkReply::NoError) {
//             QByteArray data = reply->readAll();
//             QJsonDocument jsonResponse = QJsonDocument::fromJson(data);
//             QJsonObject jsonObject = jsonResponse.object();

//             QString cityname = jsonObject["name"].toString();
//             QString city_abbreviation = jsonObject["sys"].toObject()["country"].toString();
//             QString locationText = cityname + ", " + city_abbreviation;
//             ui->location_label->setText(locationText);
//             updateLocationLabel(locationText);
//         } else {
//             qDebug() << "Error fetching data for City " << link << ": " << reply->errorString();
//         }

//         reply->deleteLater();
//     });
// }
// ///////////////////////////////////////////////////////////////////////////////////////

// ///////////////////////////////////////////////////////////////////////////////////////
// void MainWindow::updateWindspeedLabel(double windSpeed)
// {
//     if (windSpeed > 0) {
//         ui->windspeed_value->setText(QString::number(windSpeed, 'f', 1) + " m/s");
//     } else {
//         ui->windspeed_value->setText("N/A");
//     }
// }


// void MainWindow::on_windspeed_value_linkActivated(const QString &link)
// {
//     qDebug() << "Link Activated for City: " << link;

//     QNetworkReply *reply = makeApiRequest(link);

//     // Connect the finished signal to a lambda function that updates the windspeed label
//     connect(reply, &QNetworkReply::finished, this, [=]() {
//         if (reply->error() == QNetworkReply::NoError) {
//             QByteArray data = reply->readAll();
//             QJsonDocument jsonResponse = QJsonDocument::fromJson(data);
//             QJsonObject jsonObject = jsonResponse.object();

//             double windSpeed = jsonObject["wind"].toObject()["speed"].toDouble();

//             // Call the updateWindspeedLabel function with the wind speed
//             qDebug() << "Wind Speed for City " << link << ": " << windSpeed;
//             updateWindspeedLabel(windSpeed);
//         } else {
//             qDebug() << "Error fetching data for City " << link << ": " << reply->errorString();
//         }

//         // Clean up the network reply
//         reply->deleteLater();
//     });
// }
// ///////////////////////////////////////////////////////////////////////////////////////

// ///////////////////////////////////////////////////////////////////////////////////////
// void MainWindow::updateHumidityLabel(double humidity)
// {
//     if (humidity > 0) {
//         ui->humidity_value->setText(QString::number(humidity, 'f', 1) + " m/s");
//     } else {
//         ui->humidity_value->setText("N/A");
//     }
// }


// void MainWindow::on_humidity_value_linkActivated(const QString &link)
// {
//     QNetworkReply *reply = makeApiRequest(link);

//     // Connect the finished signal to a lambda function that updates the windspeed label
//     connect(reply, &QNetworkReply::finished, this, [=]() {
//         if (reply->error() == QNetworkReply::NoError) {
//             QByteArray data = reply->readAll();
//             QJsonDocument jsonResponse = QJsonDocument::fromJson(data);
//             QJsonObject jsonObject = jsonResponse.object();

//             double humidity = jsonObject["main"].toObject()["humidity"].toDouble();
//             updateHumidityLabel(humidity);
//         } else {
//             qDebug() << "Error fetching data for City " << link << ": " << reply->errorString();
//         }

//         reply->deleteLater();
//     });
// }


