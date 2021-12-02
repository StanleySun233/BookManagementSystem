#ifndef SEARCH_H
#define SEARCH_H

#include <QWidget>
#include "string"
#include "QFile"
#include "Book.h"
#include "error.h"
#define MAXBOOK 100
using namespace std;

namespace Ui {
class findd;
}

class findd : public QWidget
{
    Q_OBJECT

public:
    explicit findd(QWidget *parent = nullptr);
    ~findd();
    void load();
    void setBook(Book *bo);
public slots:
    void on_CheckButton_clicked();
private:
    Ui::findd *ui;
    Book *book;
};

#endif // SEARCH_H
