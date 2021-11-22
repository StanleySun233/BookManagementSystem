#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "account.h"
#include "error.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
using namespace std;
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();
    void AddAccount(Account *a);

public slots:
    void on_login_clicked();
    void on_regist_clicked();
private:
    Ui::Login *ui;
    Account *Acc;
};
#endif // LOGIN_H
