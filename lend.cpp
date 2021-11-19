#include "lend.h"
#include "ui_lend.h"

lend::lend(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lend)
{
    ui->setupUi(this);
}

lend::~lend()
{
    delete ui;
}

void lend::setBook(Book *b)
{
    this->book = b;
}

void lend::on_SerachButton_clicked()
{
    qDebug("%d",1);
    QString SearchText = this->ui->SearchText->toPlainText();
    string s = SearchText.toStdString();
        qDebug("%d",2);
    int z = -1;
    for(int i = 0;i<this->book->getL();i++)
    {
        if(this->book->getName(i) == s || this->book->getISBN(i) == s)
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
        this->ui->SearchText->clear();
    }
    else
    {
        this->ui->BookLabel->setPixmap(QString::fromStdString(":/img/img/book/" + this->book->getISBN(z) +".jpg"));
        if (this->book->getStatus(z))
        {
            error *p = new error;
            p->show();
            p->ShowText("还书成功");
        }
        else
        {
            error *p = new error;
            p->show();
            p->ShowText("书本未处于出借状态，请重新确认");
        }
    }
}
