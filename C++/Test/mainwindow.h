#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include "setting.h"
#include "signup.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void updateUIFromApiResponse(const QJsonObject &jsonObject);

    void updateUIFromHourlyForecast(QJsonObject forecastWeatherJsonObject);

    void updateUIFromFiveDayForecast(QJsonObject forecastWeatherJsonObject);

    void updateUIAirQuality(QJsonObject AirQalityJsonObject);

    // void updateLocationLabel(QString LocationText);

    // void updateWindspeedLabel(double windSpeed);

    // void updateHumidityLabel(double humidity);

private slots:

    void Home_button();

    void Dashboard_button();

    void Setting_button();

    void on_comboBox_currentIndexChanged(int index);

    // void on_windspeed_value_linkActivated(const QString &link);

    // void on_location_label_linkActivated(const QString &link);

    // void on_humidity_value_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    QStringList city_names;
    QNetworkReply* makeApiRequest(const QString &link);
    Setting *setting;
    Signup *signup;

};
#endif // MAINWINDOW_H
