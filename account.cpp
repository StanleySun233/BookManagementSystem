#include "account.h"

string Account::getAcc(int i)
{
    return this->acc[i];
}

string Account::getPas(int i)
{
    return this->pas[i];
}

int Account::getL()
{
    return this->l;
}

int Account::getAuth(int i)
{
    return this->auth[i];
}

bool Account::compareAcc(string s)
{
    for (int i = 0;i<this->getL();i++)
        if (s == this->getAcc(i))
            return true;
    return false;
}

bool Account::comparePas(string s)
{
    for (int i = 0;i<this->getL();i++)
        if (s == this->getPas(i))
            return true;
    return false;
}

Account::Account()
{
    this->l = 0;
}

void Account::addUserLoad(string a,string p,int u)
{
    this->acc[this->getL()] = a;
    this->pas[this->getL()] = p;
    this->auth[this->getL()] = u;
    this->l= this->l + 1;
}

void Account::addUser(string a,string p,int u)
{
    this->addUserLoad(a,p,u);
    QString fileName = QString::fromStdString(this->getPath())+"data/account.txt";
    QFile file(fileName);
    if(file.open(QFile::WriteOnly | QFile::Append))
    {
       QTextStream out(&file);
       QString a0;
       a0 = QString::fromStdString(a);
       QString p0;
       p0 = QString::fromStdString(p);
       out <<"\n"<< a0 <<" "<<p0<< " " << u;
       }
}

void Account::load()
{
    QString fileName = ":/data/data/account.txt";
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        qDebug("Can't open the file!\n");
    else
        qDebug("File open successfully!\n");
    while(!file.atEnd())
    {

        QByteArray line = file.readLine();
        QString str(line);
        if(str.toStdString().length() <=5)
            continue;
        QStringList sList = str.split(" ");
        QString t0 = sList[0];
        QString t1 = sList[1];
        QString t2 = sList[2];
        string t3 = t0.toStdString();
        string t4 = t1.toStdString();
        int t5 = t2.toInt();
        this->addUserLoad(t3,t4,t5);
    }
    qDebug("数据读取成功");
    file.close();
}

bool Account::compare(string s1,string s2)
{
    for(int i = 0;i<this->getL();i++)
        if(this->getAcc(i) == s1 && this->getPas(i) == s2)
            return true;
    return false;
}

int Account::getAuthByAcc(string a)
{
    for(int i = 0;i< this->getL();i++)
        if(a == this->getAcc(i))
            return this->getAuth(i);
    return -1;
}

void Account::setPas(int i,string s)
{
    this->pas[i] = s;
}

void Account::save()
{
    QString fileName = QString::fromStdString(this->getPath()) + "data/account.txt";
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QFile::Truncate))
    {
        qDebug("Clear");
    }
    file.close();
    if(file.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream out(&file);
        for(int i = 0;i<this->getL();i++)
        {
            QString s;
            s = QString::fromStdString(this->getAcc(i));
            out<<s<<" ";

            s = QString::fromStdString(this->getPas(i));
            out<<s<<" ";

            s = QString::fromStdString(to_string(this->getAuth(i)));
            out<<s;
            out<<"\n";
        }
    }
    qDebug("数据修改成功");
    file.close();
}

void Account::setPath(string s)
{
    this->path = s;
}

string Account::getPath()
{
    return this->path;
}

void Account::setAuth(int i,int j)
{
    this->auth[i] = j;
}

string Account::getAuthString(int i)
{
    switch (i)
    {
        case 0:
            return "访客";
        case 1:
            return "学生";
        case 2:
            return "普通管理员";
        case 3:
            return "超级管理员";
    }
    return "ERROR";
}
