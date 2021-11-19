#ifndef BOOKUI_H
#define BOOKUI_H
#include "borrow.h"
#include"account.h"
#include <QWidget>
#include "QLabel"
#include "Book.h"
#include "lend.h"
using namespace std;
namespace Ui {
class bookui;
}

class bookui : public QWidget
{
    Q_OBJECT

public:
    explicit bookui(QWidget *parent = nullptr);
    ~bookui();
    bookui(Account *a);
    string getLoginAcc();
    void setLogin(string a,int b);
    int getLoginAuth();
    void ShowName(string s);
    void setBook(Book *bo);

public slots:
    void on_BorrowButton_clicked();
    void on_LendButton_clicked();
//    void on_SearchButton_clicked();
private:
    Ui::bookui *ui;
    Account *Acc;
    string loginAcc;
    int loginAuth;
    Book *book;
};

#endif // BOOKUI_H
