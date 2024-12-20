#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "signup.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>

login::login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    this->setWindowTitle("SkyMate");

    ui->signup_icon->setPixmap(QPixmap("/Users/spoofch/Documents/Project/C++/Icons/signup_icon.png"));

    connect(ui->login_Button, &QPushButton::clicked, this, &login::login_Button);
    connect(ui->goto_signup_Button, &QPushButton::clicked, this, &login::goto_signup_button);
}

login::~login()
{
    delete ui;
}

void login::login_Button()
{
    qDebug() << "Log-In-Button-Clicked";

    // Get entered credentials from the login UI
    QString enteredUsername = ui->username_box->text();
    QString enteredPassword = ui->password_box->text();

    // Open the file to read user data
    QFile file("/Users/spoofch/Documents/Project/C++/userAccount.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&file);

        bool loginSuccessful = false;

        // Read the file line by line and check for matching credentials
        while (!stream.atEnd())
        {
            QString line = stream.readLine();

            // Assuming each user's data has the format "full_name,email,username,password"
            QStringList userData = line.split(",");
            if (userData.length() == 4)
            {
                QString storedUsername = userData[2].trimmed();
                QString storedPassword = userData[3].trimmed();

                // Check if entered credentials match
                if (enteredUsername == storedUsername && enteredPassword == storedPassword)
                {
                    loginSuccessful = true;
                    break;
                }
            }
        }

        file.close();

        if (loginSuccessful)
        {
            qDebug() << "Login successful";
            hide();
            MainWindow *mainWindow = new MainWindow();
            mainWindow->show();
        }
        else
        {
            qDebug() << "Login failed. Incorrect username or password.";
            // Display an error message to the user using QMessageBox
            QMessageBox::warning(this, "Login Failed", "Incorrect username or password.");
        }
    }
    else
    {
        qDebug() << "Error opening the file!";
    }
}

void login::goto_signup_button()
{
    qDebug() << "Login successful";
    hide();
    Signup *signup = new Signup();
    signup->show();
}
