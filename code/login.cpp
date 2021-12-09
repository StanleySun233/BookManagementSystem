#include "login.h"
#include "ui_login.h"
#include "iostream"
#include "bookui.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_login_clicked()
{
    QString acc = this->ui->account->toPlainText();
    QString pas = this->ui->passowrd->toPlainText();
    string a = acc.toStdString();
    string p = pas.toStdString();
    if (this->Acc->compare(a,p))
    {
        bookui *p = nullptr;
        p =  new bookui;
        p->setPath(this->Acc->getPath());
        p->setAccount(this->Acc);
        p->setLogin(a,this->Acc->getAuthByAcc(a));
        p->ShowName(a);
        p->show();
    }
    else if(!this->Acc->compareAcc(a))
    {
        error *err = new error;
        err->show();
        err->ShowText("账号不存在");
    }
    else
    {
        error *err = new error;
        err->show();
        err->ShowText("密码错误");
    }
}

void Login::on_regist_clicked()
{
    QString acc = this->ui->account->toPlainText();
    QString pas = this->ui->passowrd->toPlainText();
    string a = acc.toStdString();
    string p = pas.toStdString();
    if(!this->Acc->compareAcc(a))
    {
        this->Acc->addUser(a,p,0);
        error *err = new error;
        err->show();
        err->ShowText("注册成功");
        qDebug("success");
    }
    else if(a.length()<=5 or p.length()<=5)
    {
        error *err = new error;
        err->show();
        err->ShowText("账号或密码太短，请重新输入");
        this->ui->account->clear();
        this->ui->passowrd->clear();
        qDebug("unsuccess");
    }
    else
    {
        error *err = new error;
        this->ui->account->clear();
        this->ui->passowrd->clear();
        err->show();
        err->ShowText("注册失败，账号重复");
        qDebug("unsuccess");
    }

}

void Login::AddAccount(Account *a)
{
    this->Acc = a;
}
