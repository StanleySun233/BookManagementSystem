#include "borrow.h"
#include "ui_borrow.h"

borrow::borrow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::borrow)
{
    ui->setupUi(this);
}

borrow::~borrow()
{
    delete ui;
}

void borrow::setBook(Book *bo)
{
    this->book = bo;
}


void borrow::on_CheckButton_clicked()
{
    QString search = this->ui->textEdit->toPlainText();
    qDebug("%s","123");
    string s = search.toStdString();
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
        this->ui->Borrower->setText(QString::fromStdString(this->book->getBorrower(z)));
        this->ui->BookLabel->setPixmap(QString::fromStdString(":/img/img/book/" + this->book->getISBN(z) +".jpg"));
        if (this->book->getStatus(z))
            this->ui->StatusLabel->setText(QString::fromStdString("已经外借"));
        else
            this->ui->StatusLabel->setText(QString::fromStdString("在库"));
    }
}

void borrow::on_BorrowBook_clicked()
{
    QString ISBN = this->ui->ISBNNameLabel->text();
    string I = ISBN.toStdString();
    int z = -1;
    for(int i = 0;i<this->book->getL();i++)
    {
        if(this->book->getISBN(i) == I)
        {
            z = i;
            break;
        }
    }

    if(this->book->getStatus(z))
    {
        error *p = new error;
        p->show();
        p->ShowText("此书已经被借走了，不能再借了");
    }
    else
    {
        this->book->setBorrower(z,this->getLoginAccount());
        this->book->setStatus(z,1);
        this->book->writeBook();
        this->ui->StatusLabel->setText(QString::fromStdString("已经外借"));
        this->ui->Borrower->setText(QString::fromStdString(this->book->getBorrower(z)));
        error *p = new error;
        p->show();
        p->ShowText("借阅成功");
    }
}

void borrow::setAccount(Account *Acc)
{
    this->Acc = Acc;
}

void borrow::setLoginAccount(string s)
{
    this->LoginAccount = s;
}

string borrow::getLoginAccount()
{
    return this->LoginAccount;
}
