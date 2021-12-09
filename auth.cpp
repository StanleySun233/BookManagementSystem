#include "auth.h"
#include "ui_auth.h"

auth::auth(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::auth)
{
    ui->setupUi(this);
}

auth::~auth()
{
    delete ui;
}

void auth::setAcc(Account *a)
{
    this->Acc = a;
}
void auth::on_up_clicked()
{
    QString s = this->ui->textEdit->toPlainText();
    string ss = s.toStdString();
    int z = -1;
    qDebug("%d",this->Acc->getL());
    for(int i =0; i< this->Acc->getL();i++)
        if (ss == this->Acc->getAcc(i))
        {
            z = i;
            break;
        }
    if(z + 1)
    {
        if(this->Acc->getAuth(z) < 2)
        {
            this->Acc->setAuth(z,this->Acc->getAuth(z) + 1);
            this->Acc->save();
            error *e = new error;
            e->ShowText("权限升级成功");
            e->show();
            this->ui->now->setText(QString::fromStdString(this->Acc->getAuthString(this->Acc->getAuth(z))));
            this->ui->present->setText(QString::fromStdString(this->Acc->getAuthString(this->Acc->getAuth(z) - 1)));
        }
        else
        {
            error *e = new error;
            e->ShowText("该账户已经是普通管理员权限，无法升级");
            e->show();
            this->ui->now->setText(QString::fromStdString(this->Acc->getAuthString(this->Acc->getAuth(z))));
            this->ui->present->clear();
        }
    }
}

void auth::on_down_clicked()
{
    QString s = this->ui->textEdit->toPlainText();
    string ss = s.toStdString();
    int z = -1;
    qDebug("%d",this->Acc->getL());
    for(int i =0; i< this->Acc->getL();i++)
        if (ss == this->Acc->getAcc(i))
        {
            z = i;
            break;
        }
    if(z + 1)
    {
        if(this->Acc->getAuth(z) < 2 && this->Acc->getAuth(z) > 0)
        {
            qDebug("%d等级",this->Acc->getAuth(z));
            this->Acc->setAuth(z,this->Acc->getAuth(z)-1);
            this->Acc->save();
            error *e = new error;
            e->ShowText("权限降级成功");
            e->show();
            this->ui->now->setText(QString::fromStdString(this->Acc->getAuthString(this->Acc->getAuth(z))));
            this->ui->present->setText(QString::fromStdString(this->Acc->getAuthString(this->Acc->getAuth(z + 1))));
        }

        else if(this->Acc->getAuth(z) == 3)
        {
            error *e = new error;
            e->ShowText("超级管理员无法降级");
            e->show();
            this->ui->now->setText(QString::fromStdString(this->Acc->getAuthString(this->Acc->getAuth(z))));
            this->ui->present->clear();
        }

        else
        {
            error *e = new error;
            e->ShowText("该账户已经是访客权限，无法降级");
            e->show();
            this->ui->now->setText(QString::fromStdString(this->Acc->getAuthString(this->Acc->getAuth(z))));
            this->ui->present->clear();
        }
    }
}
