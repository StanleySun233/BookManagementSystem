#ifndef LEND_H
#define LEND_H

#include <QWidget>
#include "string"
#include "Book.h"
#include "error.h"
using namespace std;

namespace Ui {
class lend;
}

class lend : public QWidget
{
    Q_OBJECT

public:
    explicit lend(QWidget *parent = nullptr);
    ~lend();
    void setBook(Book *b);
public slots:
    void on_SerachButton_clicked();
private:
    Ui::lend *ui;
    Book *book;
};

#endif // LEND_H
