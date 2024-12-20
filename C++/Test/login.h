#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void login_Button();
    void goto_signup_button();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
