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

void bookui::setAccount(Account *a)
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
    this->loginAuth = this->getLoginAuth();
    a = this->Acc->getAuthString(this->Acc->getAuthByAcc(s));
    this->ui->AuthLabel->setText(QString::fromStdString("账号等级:" + a));
    qDebug("是否运行");
    Book *d = new Book;
    d->add();
    d->setPath(this->Acc->getPath());
    this->setBook(d);
}

void bookui::setBook(Book *bo)
{
    this->book = bo;
}

void bookui::on_BorrowButton_clicked()
{
    if (this->getLoginAuth() >= 2)
    {
        borrow *c = new borrow;
        c->setBook(this->book);
        c->setLoginAccount(this->loginAcc);
        c->show();
    }
    else
    {
        error *e = new error;
        e->ShowText("非管理员权限只能使用查询和还书功能。");
        e->show();
    }
}

void bookui::on_LendButton_clicked()
{
    if (this->getLoginAuth() >= 2)
    {
        lend *l = new lend;
        l->setBook(this->book);
        l->show();
    }
    else
    {
        error *e = new error;
        e->ShowText("访客权限只能使用查询功能。");
        e->show();
    }
}

void bookui::on_AdminButton_clicked()
{
    if (this->getLoginAuth() >= 3)
    {
        auto *a = new admin;
        a->setAuthr(getLoginAuth());
        a->setAcc(this->Acc);
        a->show();
    }
    else
    {
        error *e = new error;
        e->ShowText("非超级管理员权限无法使用管理员功能。");
        e->show();
    }
}

void bookui::on_SearchButton_clicked()
{

    auto *s = new findd;
    s->setBook(this->book);
    s->show();
}

void bookui::setPath(string s)
{
    this->path = s;
}

string bookui::getPath()
{
    return this->path;
}
