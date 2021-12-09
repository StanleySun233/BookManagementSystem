#include "findd.h"
#include "ui_findd.h"

findd::findd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::findd)
{
    ui->setupUi(this);
}

  findd::~  findd()
{
    delete ui;
}

void  findd::setBook(Book *bo)
{
    this->book = bo;
}


void  findd::on_CheckButton_clicked()
{
    QString sear = this->ui->textEdit->toPlainText();
    qDebug("%s","123");
    string s = sear.toStdString();
    int z = -1;
    for(int i =0;i<this->book->getL();i++)
    {
        if (this->book->getISBN(i) == s || this->book->getName(i) == s)
        {
            z = i;
            break;
        }
    }
    if (z == -1)
    {
        error *p = new error;
        p->show();
        p->ShowText("找不到此信息，请重新输入");
        this->ui->textEdit->clear();
    }
    else
    {
        this->ui->BookNameLabel->setText(QString::fromStdString(this->book->getName(z)));
        this->ui->ISBNNameLabel->setText(QString::fromStdString(this->book->getISBN(z)));
        this->ui->BookLabel->setPixmap(QString::fromStdString(":/img/img/book/" + this->book->getISBN(z) +".jpg"));
        if (this->book->getStatus(z))
            this->ui->StatusLabel->setText(QString::fromStdString("已经外借"));
        else
            this->ui->StatusLabel->setText(QString::fromStdString("在库"));
    }
}
