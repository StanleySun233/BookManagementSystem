#include "admin.h"
#include "ui_admin.h"

admin::admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}

void admin::on_AccountButton_clicked()
{
    QString acc = this->ui->AccountText->toPlainText();
    string ac = acc.toStdString();
    int z = -1;
    qDebug("%d",this->Acc->getL());
    for(int i =0; i< this->Acc->getL();i++)
        {
            qDebug(qUtf8Printable(QString::fromStdString(this->Acc->getAcc(i))));
            if (ac == this->Acc->getAcc(i))
            {
                z = i;
                break;
            }
        }
       qDebug("%d",z);
    if(z+1)
    {
        this->ui->PasswordLabel->setText(QString::fromStdString(this->Acc->getPas(z)));
        this->ui->AuthLabel->setText(QString::fromStdString(this->Acc->getAuthString(this->Acc->getAuth(z))));;
    }
    else
    {
        error *e = new error;
        e->ShowText("未找到此账号");
        e->show();
    }
}

void admin::setAcc(Account *a)
{
    this->Acc = a;
}

void admin::on_PasswordButton_clicked()
{
    QString s = this->ui->AccountText->toPlainText();
    string ss = s.toStdString();
    string pas = this->ui->PasswordSet->toPlainText().toStdString();
    int z = -1;
    qDebug("%d",this->Acc->getL());
    for(int i =0; i< this->Acc->getL();i++)
        if (ss == this->Acc->getAcc(i))
        {
            z = i;
            break;
        }

    qDebug("%d",z);
    if (pas.length()<5)
    {
        error *e = new error;
        e->ShowText("密码长度过短，请重新输入");
        e->show();
        this->ui->PasswordLabel->clear();
        this->ui->PasswordSet->clear();
    }
    else if(z+1)
    {
        error *e = new error;
        e->ShowText("修改成功");
        e->show();
        this->Acc->setPas(z,pas);
        this->ui->PasswordLabel->setText(QString::fromStdString(pas));
        this->Acc->save();
    }
    else
    {
        error *e = new error;
        e->ShowText("未找到此账号");
        e->show();
    }
}

void admin::on_AuthButton_clicked()
{
    if(this->getAuthr() >=3)
    {
        auth *a = new auth;
        a->setAcc(this->Acc);
        a->show();
    }
    else
    {
        error *e = new error;
        e->ShowText("普通管理员无法修改权限");
        e->show();
    }
}

void admin::setAuthr(int a)
{
    this->authr = a;
}

int admin::getAuthr()
{
    return this->authr;
}
