#include "Book.h"

void Book::addBook(string i,string n,bool s, string b,int no)
{
    this->ISBN[no] = i;
    this->name[no] = n;
    this->status[no] = s;
    this->borrower[no] = b;
    this->no[no] = no;
    this->l = this->l+1;
}

void Book::add()
{
    this->l = 0;
    qDebug("数据正在读取");
    QString fileName = ":/data/data/book.txt";
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        qDebug("Can't open the file!\n");
    else
        qDebug("File open successfully!\n");
    while(!file.atEnd()) {
        QByteArray line = file.readLine();
        QString str(line);
        qDebug(qUtf8Printable(str));
        QStringList sList = str.split(" ");
        QString t0 = sList[0];
        QString t1 = sList[1];
        QString t2 = sList[2];
        QString t3 = sList[3];
        QString t4 = sList[4];
        string q0 = t0.toStdString();
        int q1 = t1.toInt();
        string q2 = t2.toStdString();
        int q3 = t3.toInt();
        string q4 = t4.toStdString();
        this->addBook(q0,q2,q3,q4,q1);
    }
    qDebug("数据读取成功");
}

int Book::getL()
{
    return this->l;
}

string Book::getISBN(int i)
{
    return this->ISBN[i];
}

string Book::getName(int i)
{
    return this->name[i];
}

bool Book::getStatus(int i)
{
    return this->status[i];
}

string Book::getBorrower(int i)
{
    return this->borrower[i];
}

int Book::getNo(int i)
{
    return this->no[i];
}
