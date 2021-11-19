#include "bookui.h"
#include "ui_bookui.h"

bookui::bookui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bookui)
{
    ui->setupUi(this);
}

bookui::~bookui()
{
    delete ui;
}

bookui::bookui(Account *a)
{
    this->Acc = a;
}

string bookui::getLoginAcc()
{
    return this->loginAcc;
}

void bookui::setLogin(string a,int b)
{
    this->loginAcc= a;
    this->loginAuth = b;
}

int bookui::getLoginAuth()
{
    return this->loginAuth;
}

void bookui::ShowName(string s)
{
    this->ui->AccountLabel->setText(QString::fromStdString("登录账号:" + s));
    string a;
    switch (this->getLoginAuth())
    {
        case 0:
            a = "学生";
            break;
        case 1:
            a = "管理员";
            break;
        case 2:
            a = "老师";
            break;
    }
    this->ui->AuthLabel->setText(QString::fromStdString("账号等级:" + a));
    qDebug("是否运行");
    Book *d = new Book;
    d->add();
    this->setBook(d);
}

void bookui::setBook(Book *bo)
{
    this->book = bo;
}

void bookui::on_BorrowButton_clicked()
{
    borrow *c = new borrow;
    c->setBook(this->book);
    c->show();
}

void bookui::on_LendButton_clicked()
{
    lend *l = new lend;
    l->setBook(this->book);
    l->show();
}

//void bookui::on_SearchButton_clicked()
//{

//}
