#ifndef AUTH_H
#define AUTH_H

#include <QWidget>
#include "account.h"
#include "error.h"

namespace Ui {
class auth;
}

class auth : public QWidget
{
    Q_OBJECT

public:
    explicit auth(QWidget *parent = nullptr);
    ~auth();
    void setAcc(Account *a);
    Account getAcc();
private slots:
    void on_up_clicked();

    void on_down_clicked();

private:
    Ui::auth *ui;
    Account *Acc;
};

#endif // AUTH_H
