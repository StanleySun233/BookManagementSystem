#ifndef BORROW_H
#define BORROW_H
#include <QWidget>
#include "string"
#include "QFile"
#include "Book.h"
#include "error.h"
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
public slots:
    void on_CheckButton_clicked();
    void on_BorrowBook_clicked();
private:
    Ui::borrow *ui;
    Book *book;
};

#endif // BORROW_H
