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
        qDebug("%d",1);
        bookui *p = nullptr;
        p =  new bookui;
                qDebug("%d",2);
        p->setLogin(a,this->Acc->getAuthByAcc(a));
                qDebug("%d",3);
        p->ShowName(a);
                qDebug("%d",4);
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
    else
    {
        error *err = new error;
        err->show();
        err->ShowText("注册失败，账号重复");
        qDebug("unsuccess");
    }

}

void Login::AddAccount(Account *a)
{
    this->Acc = a;
}
