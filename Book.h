#ifndef BOOK_H
#define BOOK_H
#include "string"
#include "QDebug"
#include "QFile"
#include "QString"
#include "error.h"
using namespace std;

class Book
{
private:
    string ISBN[100];
    string name[100];
    bool status[100];
    string borrower[100];
    int no[100];
    int l;
public:
    void addBook(string i,string n,bool s, string b,int no);
    void add();
    int getL();
    string getISBN(int i);
    string getName(int i);
    bool getStatus(int i);
    string getBorrower(int i);
    int getNo(int i);
};

#endif // BOOK_H
