#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include "string"
#include "error.h"
#include "account.h"
#include "QString"
#include "auth.h"


namespace Ui {
class Admin;
}

class admin : public QWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();
    void setAcc(Account *a);
    void setAuthr(int a);
    int getAuthr();
private slots:
    void on_AccountButton_clicked();

    void on_PasswordButton_clicked();

    void on_AuthButton_clicked();

private:
    Ui::Admin *ui;
    Account *Acc;
    int authr;

};

#endif // ADMIN_H
