#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QPixmap>
#include <QStringList>
#include <QDateTime>
#include <QTimeZone>

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
    , setting(new Setting(this))
{
    ui->setupUi(this);
    this->setWindowTitle("SkyMate");
    // Icons for the left widget menu bar in buttons
    this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    this->centralWidget()->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->Home_button->setIcon(QIcon("/Users/spoofch/Documents/Project/C++/Icons/Home.png"));
    ui->Dashboard_button->setIcon(QIcon("/Users/spoofch/Documents/Project/C++/Icons/dashboard.png"));;
    ui->Setting_button->setIcon(QIcon("/Users/spoofch/Documents/Project/C++/Icons/settings.png"));
    ui->Exit_button->setIcon(QIcon("/Users/spoofch/Documents/Project/C++/Icons/Exit_icon.png"));


    // Icons for the middle widgets in labels
    ui->AirQuality_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/AirQuality_icon.png"));
    ui->windspeed_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/windspeed_icon.png"));
    ui->humidity_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/humidity_icon.png"));
    ui->visibility_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/visibility_icon.png"));
    ui->feelslike_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/feelslike_icon.png"));
    ui->sunrise_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sunset_icon.png"));
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
    ui->today_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sun_icon.png"));
    ui->tomorrow_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/cloudy_icon.png"));
    ui->secondday_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/cloudy_icon.png"));
    ui->thirdday_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/cloudymightrain_icon.png"));
    ui->fourthday_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sun_icon.png"));
    ui->fifthday_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sun_icon.png"));

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

    setting = new Setting(this);
    connect(ui->Home_button, &QPushButton::clicked, this, &MainWindow::Home_button);
    connect(ui->Dashboard_button, &QPushButton::clicked, this, &MainWindow::Dashboard_button);
    connect(ui->Setting_button, &QPushButton::clicked, this, &MainWindow::Setting_button);
    connect(ui->Exit_button, &QPushButton::clicked, this, &MainWindow::Exit_button);


    connect(setting, &Setting::fullScreenStateChanged, this, &MainWindow::handleFullScreenState);

    // Connect the signal from Setting to the slot in MainWindow
    connect(setting, &Setting::CelsiusCheckBoxStateChanged, this, &MainWindow::handleTempCheckBox);

    connect(setting, &Setting::resolutionChanged, this, &MainWindow::handleResolutionChange);

    connect(setting, &Setting::showMainWindow, this, &MainWindow::ShowDashBoard);

    connect(ui->comboBox, &QComboBox::currentIndexChanged, this, &MainWindow::on_comboBox_currentIndexChanged);

    // connect(setting, &Setting::TimeFormatChanged, this, &MainWindow::handleTimeFormat);

    // connect(setting, &Setting::DistanceFormatChanged, this, &MainWindow::handleDistanceFormat);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Home_button()
{
    qDebug() << "Home-Button-Clicked";
    hide();
    Signup *signup = new Signup(this);
    signup->show();

}

void MainWindow::Dashboard_button()
{
    qDebug() << "DashBoard-Button-Clicked";
}

void MainWindow::Setting_button()
{
    qDebug() << "Setting-Button-Clicked";
    hide();
    setting->show();
}

void MainWindow::Exit_button()
{
    exit(0);
}
void MainWindow::ShowDashBoard(){
    show();
}
///////////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////////
QNetworkReply* MainWindow::makeApiRequest(const QString &link)
{
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
                //qDebug() << "Data:" << data;

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
                        //qDebug() << "/nforecastWeatherData(fivedays) : " << forecastWeatherData;

                        // Process the forecastWeather forecast data as needed
                        updateUIFromFiveDayForecast(forecastWeatherJsonObject); // Add this line to update the UI with the five-day forecast data
                        updateUIFromHourlyForecast(forecastWeatherJsonObject);
                    } else {
                        //qDebug() << "Error fetching forecastWeather forecast data: " << forecastWeatherReply->errorString();
                    }

                    // Clean up the forecastWeather forecast reply
                    forecastWeatherReply->deleteLater();
                    QString cityName = jsonObject.value("name").toString();
                    QUrl AirQualityurl("http://api.waqi.info/feed/"+ cityName +"/?token=ddc8a27841f603ce2d4cf23e9350a59567db16f4");
                    QNetworkRequest AirQualityRequest(AirQualityurl);

                    QNetworkReply *AirQualityReply = manager->get(AirQualityRequest);

                    // Connect the finished signal for the UV index request
                    connect(AirQualityReply, &QNetworkReply::finished, this, [=]() {
                        if (AirQualityReply->error() == QNetworkReply::NoError) {
                            QByteArray AirQualityData = AirQualityReply->readAll();
                            QJsonDocument AirQualityJsonResponse = QJsonDocument::fromJson(AirQualityData);
                            QJsonObject AirQualityJsonObject = AirQualityJsonResponse.object();
                            // Process the UV index data as needed
                            qDebug() << "AirQ Data: " << AirQualityData;
                            updateUIAirQuality(AirQualityJsonObject);
                        } else {
                            qDebug() << "Error fetching UV index data: " << AirQualityReply->errorString();
                        }

                        // Clean up the UV index reply
                        AirQualityReply->deleteLater();
                    });
                });
            }

            // Clean up the current weather reply
            currentWeatherReply->deleteLater();
        });

        return currentWeatherReply;
    }
}

double MainWindow::celsiusToFahrenheit(double celsius) {
    return celsius * 9 / 5 + 32;
}

void MainWindow::handleTempCheckBox(bool checked){
    if (checked) {
        useFahrenheit = true;
    } else {
        useFahrenheit = false;
    }
    updateUIFromApiResponse(currentWeatherData);
}
void MainWindow::handleFullScreenState(bool checked)
{
    if (checked)
    {
        qDebug() << "Before: " << windowState();
        // Set the window to fullscreen
        setWindowState(windowState() | Qt::WindowFullScreen);
        qDebug() << "After: " << windowState();
    }
    else
    {
        // Restore the window to its normal state
        setWindowState(windowState() & ~Qt::WindowFullScreen);
        qDebug() << "no Check";
    }
}

// void MainWindow::handleTimeFormat(bool checked){
//     if (checked){
//         updateTimeFormat("hh:mm AP");
//     } else {
//         updateTimeFormat("HH:mm");
//     }
// }

// void MainWindow::updateTimeFormat(const QString& timeFormat) {
//     qDebug() << "Updating time format...";
//     qDebug() << "Current sunriseDateTime:" << sunriseDateTime;

//     QString sunriseTimeString = sunriseDateTime.toString(timeFormat);
//     QString sunsetTimeString = sunsetDateTime.toString(timeFormat);

//     qDebug() << "New sunriseTimeString:" << sunriseTimeString;

//     // Update UI elements with the new time format
//     ui->sunset_value->setText(sunsetTimeString);
//     ui->sunrise_label->setText(sunriseTimeString);

//     qDebug() << "UI elements updated.";
// }

// void MainWindow::handleDistanceFormat(bool checked){
//     updateDistanceFormat(checked);
// }
// void MainWindow::updateDistanceFormat(bool useKilometers) {
//     // If useKilometers is true, display visibility directly in kilometers
//     // Otherwise, convert visibility to miles
//     double visibilityValue = useKilometers ? visibility : (visibility / 1.60934); // 1 mile = 1.60934 kilometers

//     // Determine the appropriate distance unit
//     QString distanceUnit = useKilometers ? " km" : " miles";

//     // Update UI elements with the visibility value and unit
//     ui->visibility_value->setText(QString::number(visibilityValue, 'f', 0) + distanceUnit);
// }


void MainWindow:: handleResolutionChange(int width, int height)
{
    qDebug() << "Resolution changed to: " << width << "x" << height;
    qDebug() << "Current size before resize: " << size();
    resize(width, height);
    qDebug() << "Current size after resize: " << size();
}
void MainWindow::updateUIFromApiResponse(const QJsonObject &jsonObject)
{
    if (!jsonObject.isEmpty()) {
        QString cityname = jsonObject["name"].toString();
        QString city_abbreviation = jsonObject["sys"].toObject()["country"].toString();
        QString description = jsonObject["weather"].toArray()[0].toObject()["icon"].toString();
        double temp = jsonObject["main"].toObject()["temp"].toDouble();
        double windSpeed = jsonObject["wind"].toObject()["speed"].toDouble();
        double visibility = jsonObject["visibility"].toDouble();
        double humidity = jsonObject["main"].toObject()["humidity"].toDouble();
        double feelslike = jsonObject["main"].toObject()["feels_like"].toDouble();
        double pressure = jsonObject["main"].toObject()["pressure"].toDouble();
        QJsonObject sysObject = jsonObject["sys"].toObject();
        QJsonObject mainObject = jsonObject["main"].toObject();
        QJsonObject windObject = jsonObject["wind"].toObject();
        QJsonObject weatherObject = jsonObject["weather"].toArray()[0].toObject();
        int timezoneOffset = jsonObject["timezone"].toInt();  // in seconds

        qint64 sunriseTimestamp = jsonObject["sys"].toObject()["sunrise"].toInt();
        qint64 sunsetTimestamp = jsonObject["sys"].toObject()["sunset"].toInt();

        // Convert timestamps to QDateTime objects
        QDateTime sunriseDateTimeUtc = QDateTime::fromSecsSinceEpoch(sunriseTimestamp);
        QDateTime sunsetDateTimeUtc = QDateTime::fromSecsSinceEpoch(sunsetTimestamp);

        // Apply the timezone offset
        QDateTime sunriseDateTime = sunriseDateTimeUtc.toTimeZone(QTimeZone(timezoneOffset));
        QDateTime sunsetDateTime = sunsetDateTimeUtc.toTimeZone(QTimeZone(timezoneOffset));

        // Format the time strings
        QString sunriseTimeString = sunriseDateTime.toString("hh:mm AP");
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
        qDebug() << "Sunrise time" << sunriseTimeString;

        // Update the correct UI element (windspeed label in this case)
        QString locationText = cityname + ", " + city_abbreviation;
        double temp_celsius = (temp - 273.15);
        double temp_value = useFahrenheit ? celsiusToFahrenheit(temp_celsius) : temp_celsius;
        QString temperatureText = QString::number(temp_value, 'f', 0) + (useFahrenheit ? "°F" : "°C");
        double feelslike_celsius = (feelslike - 273.15);
        double feelslike_value = useFahrenheit ? celsiusToFahrenheit(feelslike_celsius) : feelslike_celsius;
        QString feelslikeText = QString::number(feelslike_value, 'f', 0) + (useFahrenheit ? "°F" : "°C");
        double visibility_km = visibility / 1000;
        ui->location_label->setText(locationText);
        ui->windspeed_value->setText(QString::number(windSpeed, 'f', 1) + " m/s");
        ui->humidity_value->setText(QString::number(humidity, 'f', 0) + " %");
        ui->visibility_value->setText(QString::number(visibility_km, 'f', 0) + " km");
        ui->feelslike_value->setText(feelslikeText);
        ui->pressure_value->setText(QString::number(pressure, 'f', 0) + " hPa");
        ui->sunset_value->setText(sunsetTimeString);

        ui->temperature_label->setText(temperatureText);

        ui->weathericon_indicator->clear();
        ui->sunrise_label->setText(sunriseTimeString);

        if (description == "01d" || description == "01n"){
            ui->weathericon_indicator->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sun_icon.png"));
        }else if (description == "02d"|| description == "02n"){
            ui->weathericon_indicator->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/Cloudy_icon.png"));
        }
        else if (description == "03d" || description == "03n"){
            ui->weathericon_indicator->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/scattered_clouds_icon.png"));
        }
        else if (description == "04d"|| description == "04n"){
            ui->weathericon_indicator->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/broken_clouds_icon.png"));
        }
        else if (description == "10d" || description == "09d" || description == "10n" || description == "09n"){
            ui->weathericon_indicator->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/cloudymightrain_icon.png"));
        }
        else if (description == "11d" || description == "11n"){
            ui->weathericon_indicator->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/storm_icon.png"));
        }
        else if (description == "13d" || description == "13n"){
            ui->weathericon_indicator->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/snowy_icon.png"));
        }
        else if (description == "50d" || description == "50n"){
            ui->weathericon_indicator->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/mist_icon.png"));
        }
        else {
            ui->weathericon_indicator->clear();
        }
        // Add code to update other UI elements with relevant weather data if needed
        // For example, update temperature, humidity, etc.
    } else {
        qDebug() << "Empty JSON object received.";
    }
}

void MainWindow::updateUIAirQuality(QJsonObject AirQualityJsonObject)
{
    double airquality = AirQualityJsonObject["data"].toObject()["aqi"].toDouble();
    qDebug() << "airquality" << airquality;
    ui->AirQuality_value->setText(QString::number(airquality, 'f', 0));
}

void MainWindow::updateUIFromHourlyForecast(QJsonObject forecastWeatherJsonObject)
{
    //qDebug() << "Entering updateUIFromHourlyForecast function/n/n/n/n";


    if (forecastWeatherJsonObject.isEmpty()) {
        //qDebug() << "Empty hourly forecast JSON object received.";
        // Handle the case when no hourly forecast data is available (e.g., show a message or clear UI elements)
        ui->weathericon_indicator_at_six->clear();
        ui->weathericon_indicator_at_nine->clear();
        ui->weathericon_indicator_at_twelve->clear();
        qDebug() << "No Data";
        return;
    }

    // Process the hourly forecast data
    QJsonArray hourlyList = forecastWeatherJsonObject["list"].toArray();

    // Clear existing data from UI elements or charts (replace with your actual chart or list update logic)
    ui->weathericon_indicator_at_six->clear();
    ui->weathericon_indicator_at_nine->clear();
    ui->weathericon_indicator_at_twelve->clear();

    for (const QJsonValue &hourlyData : hourlyList) {
        QJsonObject hourlyObject = hourlyData.toObject();

        // Extract relevant information from the JSON object
        QString dateTimeString = hourlyObject["dt_txt"].toString();
        double hourlyTemp = hourlyObject["main"].toObject()["temp"].toDouble();
        //qDebug() << "Time:" << dateTimeString << " Hourly Temperature:" << hourlyTemp;
        QString hourly_icon = hourlyObject["weather"].toArray()[0].toObject()["icon"].toString();
        hourlyTemp -= 273.15;

        QDateTime dateTime = QDateTime::fromString(dateTimeString, "yyyy-MM-dd hh:mm:ss");
        // qDebug() << "hourlyTemp: " << hourlyTemp;
        // qDebug() << "Hourly Temp JSON: " << hourlyObject["main"].toObject();
        // qDebug() << "Weather JSON: " << hourlyObject["weather"].toArray();




        if (!dateTime.isValid()) {
            qDebug() << "Invalid date and time format in API data.";
            continue;
        }

        // Update the QLabel elements with the parsed information based on the hour
        if (dateTime.time().hour() == 6) {
            ui->temperatureatsix->setText(QString::number(hourlyTemp, 'f', 0) + "°c");
            // Set the corresponding icon for 6 AM
            if (hourly_icon == "01d" || hourly_icon == "01n"){
                ui->weathericon_indicator_at_six->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sun_icon.png"));
            }else if (hourly_icon == "02d"|| hourly_icon == "02n"){
                ui->weathericon_indicator_at_six->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/Cloudy_icon.png"));
            }
            else if (hourly_icon == "03d" || hourly_icon == "03n"){
                ui->weathericon_indicator_at_six->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/scattered_clouds_icon.png"));
            }
            else if (hourly_icon == "04d"|| hourly_icon == "04n"){
                ui->weathericon_indicator_at_six->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/broken_clouds_icon.png"));
            }
            else if (hourly_icon == "10d" || hourly_icon == "09d" || hourly_icon == "10n" || hourly_icon == "9n"){
                ui->weathericon_indicator_at_six->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/cloudymightrain_icon.png"));
            }
            else if (hourly_icon == "11d" || hourly_icon == "11n"){
                ui->weathericon_indicator_at_six->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/storm_icon.png"));
            }
            else if (hourly_icon == "13d" || hourly_icon == "13d"){
                ui->weathericon_indicator_at_six->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/snowy_icon.png"));
            }
            else if (hourly_icon == "50d" || hourly_icon == "50d"){
                ui->weathericon_indicator_at_six->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/mist_icon.png"));
            }
            else {
                ui->weathericon_indicator_at_six->clear();
            }
        } else if (dateTime.time().hour() == 9) {
            ui->temperatureatnine->setText(QString::number(hourlyTemp, 'f', 0) + "°c");
            // Set the corresponding icon for 9 AM
            if (hourly_icon == "01d" || hourly_icon == "01n"){
                ui->weathericon_indicator_at_nine->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sun_icon.png"));
            }else if (hourly_icon == "02d"|| hourly_icon == "02n"){
                ui->weathericon_indicator_at_nine->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/Cloudy_icon.png"));
            }
            else if (hourly_icon == "03d" || hourly_icon == "03n"){
                ui->weathericon_indicator_at_nine->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/scattered_clouds_icon.png"));
            }
            else if (hourly_icon == "04d"|| hourly_icon == "04n"){
                ui->weathericon_indicator_at_nine->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/broken_clouds_icon.png"));
            }
            else if (hourly_icon == "10d" || hourly_icon == "09d" || hourly_icon == "10n" || hourly_icon == "9n"){
                ui->weathericon_indicator_at_nine->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/cloudymightrain_icon.png"));
            }
            else if (hourly_icon == "11d" || hourly_icon == "11n"){
                ui->weathericon_indicator_at_nine->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/storm_icon.png"));
            }
            else if (hourly_icon == "13d" || hourly_icon == "13d"){
                ui->weathericon_indicator_at_nine->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/snowy_icon.png"));
            }
            else if (hourly_icon == "50d" || hourly_icon == "50d"){
                ui->weathericon_indicator_at_nine->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/mist_icon.png"));
            }
            else {
                ui->weathericon_indicator_at_nine->clear();
            }
        } else if (dateTime.time().hour() == 12) {
            ui->temperatureattwelve->setText(QString::number(hourlyTemp, 'f', 0) + "°c");
            // Set the corresponding icon for 12 PM
            if (hourly_icon == "01d" || hourly_icon == "01n"){
                ui->weathericon_indicator_at_twelve->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sun_icon.png"));
            }else if (hourly_icon == "02d"|| hourly_icon == "02n"){
                ui->weathericon_indicator_at_twelve->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/Cloudy_icon.png"));
            }
            else if (hourly_icon == "03d" || hourly_icon == "03n"){
                ui->weathericon_indicator_at_twelve->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/scattered_clouds_icon.png"));
            }
            else if (hourly_icon == "04d"|| hourly_icon == "04n"){
                ui->weathericon_indicator_at_twelve->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/broken_clouds_icon.png"));
            }
            else if (hourly_icon == "10d" || hourly_icon == "09d" || hourly_icon == "10n" || hourly_icon == "9n"){
                ui->weathericon_indicator_at_twelve->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/cloudymightrain_icon.png"));
            }
            else if (hourly_icon == "11d" || hourly_icon == "11n"){
                ui->weathericon_indicator_at_twelve->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/storm_icon.png"));
            }
            else if (hourly_icon == "13d" || hourly_icon == "13d"){
                ui->weathericon_indicator_at_twelve->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/snowy_icon.png"));
            }
            else if (hourly_icon == "50d" || hourly_icon == "50d"){
                ui->weathericon_indicator_at_twelve->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/mist_icon.png"));
            }
            else {
                ui->weathericon_indicator_at_twelve->clear();
            }
        }
    }

    //qDebug() << "Exiting updateUIFromHourlyForecast function";
}


void setWrappedText(QLabel* label, const QString& text) {
    label->setWordWrap(true);
    label->setText(text);
}

void setWeatherIcon(QLabel* iconLabel, const QString& iconCode)
{
    if (iconCode == "01d" || iconCode == "01n") {
        iconLabel->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/sun_icon.png"));
    } else if (iconCode == "02d" || iconCode == "02n") {
        iconLabel->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/Cloudy_icon.png"));
    } else if (iconCode == "03d" || iconCode == "03n") {
        iconLabel->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/scattered_clouds_icon.png"));
    } else if (iconCode == "04d" || iconCode == "04n") {
        iconLabel->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/broken_clouds_icon.png"));
    } else if (iconCode == "10d" || iconCode == "09d" || iconCode == "10n" || iconCode == "9n") {
        iconLabel->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/cloudymightrain_icon.png"));
    } else if (iconCode == "11d" || iconCode == "11n") {
        iconLabel->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/storm_icon.png"));
    } else if (iconCode == "13d" || iconCode == "13n") {
        iconLabel->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/snowy_icon.png"));
    } else if (iconCode == "50d" || iconCode == "50n") {
        iconLabel->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/mist_icon.png"));
    } else {
        iconLabel->clear();
    }
}
void MainWindow::updateUIFromFiveDayForecast(QJsonObject forecastWeatherJsonObject)
{
    //qDebug() << "Five day Data: " << forecastWeatherJsonObject;
    if (forecastWeatherJsonObject.isEmpty()) {
        ui->fifthday_temp->setText("N/A");
        ui->today_temp->setText("N/A");
        ui->tomorrow_temp->setText("N/A");
        ui->tomorrow_temp->setText("N/A");
        return;
    }

    // Example: Update daily temperature values
    QJsonArray dailyList = forecastWeatherJsonObject["list"].toArray();

    // Clear existing data from UI elements
    ui->fifthday_temp->clear();
    ui->today_temp->clear();
    ui->tomorrow_temp->clear();
    ui->tomorrow_temp->clear();
    ui->secondday_temp->clear();
    ui->fourthday_temp->clear();

    // Get the current date
    QDateTime currentDateTime = QDateTime::currentDateTimeUtc();
    QDate currentDate = currentDateTime.date();

    for (const QJsonValue &dailyData : dailyList) {
        QJsonObject dailyObject = dailyData.toObject();
        QString dateString = dailyObject["dt_txt"].toString();

        // Parse the date string into QDateTime
        QDateTime dateTime = QDateTime::fromString(dateString, "yyyy-MM-dd hh:mm:ss");
        QDate date = dateTime.date();
        // Adjust to the local time zone if needed
        dateTime = dateTime.toLocalTime();

        QString dayLabel;
        if (date == currentDate) {
            dayLabel = "today_temp";
        } else if (date == currentDate.addDays(1)) {
            dayLabel = "tomorrow_temp";
        } else if (date == currentDate.addDays(2)) {
            dayLabel = "secondday_temp";
        } else if (date == currentDate.addDays(3)) {
            dayLabel = "thirdday_temp";
        } else if (date == currentDate.addDays(4)) {
            dayLabel = "fourthday_temp";
        } else if (date == currentDate.addDays(5)) {
            dayLabel = "fifthday_temp";
        } else {
            qDebug() << "Invalid date in API data.";
            continue;
        }
        QString iconCode = "";  // Initialize with an appropriate default value
        if (dailyObject.contains("weather")) {
            QJsonArray weatherArray = dailyObject["weather"].toArray();
            if (!weatherArray.isEmpty()) {
                QJsonObject weatherObject = weatherArray.first().toObject();
                if (weatherObject.contains("icon")) {
                    iconCode = weatherObject["icon"].toString();
                }
            }
        }
        QString description = "N/A";  // Default value if "description" is not found
        if (dailyObject.contains("weather")) {
            QJsonArray weatherArray = dailyObject["weather"].toArray();
            if (!weatherArray.isEmpty()) {
                QJsonObject weatherObject = weatherArray.first().toObject();
                if (weatherObject.contains("description")) {
                    description = weatherObject["description"].toString();
                }
            }
        }
        // Extract maximum and minimum temperatures
        double dailyMaxTemp = dailyObject["main"].toObject()["temp_max"].toDouble();
        double dailyMinTemp = dailyObject["main"].toObject()["temp_min"].toDouble();

        QString temperatureText2;

        if (dailyMaxTemp == 0 && dailyMinTemp == 0) {
            temperatureText2 = "N/A";
        } else {
            dailyMaxTemp -= 273.15;
            dailyMinTemp -= 273.15;

            QString maxTempString = QString::number(dailyMaxTemp, 'f', 0);  // One decimal place
            QString minTempString = QString::number(dailyMinTemp, 'f', 0);  // One decimal place
            temperatureText2 = QString("%1/%2°C").arg(maxTempString, minTempString);
        }

        // Update the corresponding QLabel based on the day of the week
        if (dayLabel == "today_temp") {
            ui->today_temp->setText(temperatureText2);
            setWrappedText(ui->today_description,description);
            setWeatherIcon(ui->today_icon, iconCode);
        } else if (dayLabel == "tomorrow_temp") {
            ui->tomorrow_temp->setText(temperatureText2);
            setWrappedText(ui->tomorrow_description, description);
            setWeatherIcon(ui->tomorrow_icon, iconCode);
        } else if (dayLabel == "secondday_temp") {
            ui->secondday_temp->setText(temperatureText2);
            setWrappedText(ui->secondday_description, description);
            setWeatherIcon(ui->secondday_icon, iconCode);
        } else if (dayLabel == "thirdday_temp") {
            ui->thirdday_temp->setText(temperatureText2);
            setWrappedText(ui->thirdday_description, description);
            setWeatherIcon(ui->thirdday_icon, iconCode);
        } else if (dayLabel == "fourthday_temp") {
            ui->fourthday_temp->setText(temperatureText2);
            setWrappedText(ui->fourthday_description,description);
            setWeatherIcon(ui->fourthday_icon, iconCode);
        } else if (dayLabel == "fifthday_temp") {
            ui->fifthday_temp->setText(temperatureText2);
            setWrappedText(ui->fifthday_description,description);
            setWeatherIcon(ui->fifthday_icon, iconCode);
        }
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
            updateUIFromFiveDayForecast(jsonObject);
            updateUIFromHourlyForecast(jsonObject);
            updateUIAirQuality(jsonObject);

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
