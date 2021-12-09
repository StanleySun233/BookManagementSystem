#include "login.h"
#include "account.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    string s = "D:/Data/QtProject/Book/code/"; //Input your own path, or it will not work.
    QApplication a(argc, argv);
    Account *Acc = new Account();
    Acc->setPath(s);
    Acc->load();
    Login w;
    w.AddAccount(Acc);
    w.show();
    return a.exec();
}
