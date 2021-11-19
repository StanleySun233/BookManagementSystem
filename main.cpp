#include "login.h"
#include "account.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Account *Acc = new Account();
    Acc->load();
    Login w;
    w.AddAccount(Acc);
    w.show();
    return a.exec();
}
