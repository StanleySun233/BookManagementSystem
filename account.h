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
    int auth[MAXACCOUNT];//0访客 1学生 2老师 3普通管理员 4总管理员
    int l;
    string path;
public:
    Account();
    string getAcc(int i);
    string getPas(int i);
    int getAuth(int i);
    void addUserLoad(string a,string p,int u);
    void addUser(string a,string p,int u);
    void save();
    int getL();
    bool compareAcc(string s);
    bool comparePas(string s);
    bool compare(string s1,string s2);
    void load();
    int getAuthByAcc(string a);
    void setPas(int i,string s);
    void setPath(string s);
    string getPath();
    void setAuth(int i,int j);
    string getAuthString(int i);
};
#endif // ACCOUNT_H
