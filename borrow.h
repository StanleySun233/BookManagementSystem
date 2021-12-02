#ifndef BORROW_H
#define BORROW_H

#include <QWidget>
#include "string"
#include "QFile"
#include "Book.h"
#include "error.h"
#include "account.h"
#define MAXBOOK 100
using namespace std;

namespace Ui {
class borrow;
}

class borrow : public QWidget
{
    Q_OBJECT

public:
    explicit borrow(QWidget *parent = nullptr);
    ~borrow();
    void load();
    void setBook(Book *bo);
    void setAccount(Account *Acc);
    void setLoginAccount(string s);
    string getLoginAccount();
public slots:
    void on_CheckButton_clicked();
    void on_BorrowBook_clicked();
private:
    Ui::borrow *ui;
    Book *book;
    Account *Acc;
    string LoginAccount;
};

#endif // BORROW_H
