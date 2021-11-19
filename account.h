#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "fstream"
#include "QFile"
#include "string"
#include <QFileDialog>
#include <QMainWindow>
#include <QDebug>

#define MAXACCOUNT 100
using namespace std;

class Account
{
private:
    string acc[MAXACCOUNT];
    string pas[MAXACCOUNT];
    int auth[MAXACCOUNT];
    int l;
public:
    Account();
    string getAcc(int i);
    string getPas(int i);
    int getAuth(int i);
    void addUserLoad(string a,string p,int u);
    void addUser(string a,string p,int u);
    int getL();
    bool compareAcc(string s);
    bool comparePas(string s);
    bool compare(string s1,string s2);
    void load();
    int getAuthByAcc(string a);
};
#endif // ACCOUNT_H
