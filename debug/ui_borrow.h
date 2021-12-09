/********************************************************************************
** Form generated from reading UI file 'borrow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROW_H
#define UI_BORROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_borrow
{
public:
    QLabel *BookLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *CheckButton;
    QLabel *label_2;
    QLabel *BookNameLabel;
    QLabel *label_4;
    QLabel *ISBNNameLabel;
    QLabel *label_6;
    QLabel *StatusLabel;
    QLabel *label_7;
    QLabel *Borrower;
    QPushButton *BorrowBook;

    void setupUi(QWidget *borrow)
    {
        if (borrow->objectName().isEmpty())
            borrow->setObjectName(QString::fromUtf8("borrow"));
        borrow->resize(525, 468);
        BookLabel = new QLabel(borrow);
        BookLabel->setObjectName(QString::fromUtf8("BookLabel"));
        BookLabel->setGeometry(QRect(230, 170, 281, 281));
        verticalLayoutWidget = new QWidget(borrow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 201, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        CheckButton = new QPushButton(verticalLayoutWidget);
        CheckButton->setObjectName(QString::fromUtf8("CheckButton"));

        verticalLayout->addWidget(CheckButton);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        BookNameLabel = new QLabel(verticalLayoutWidget);
        BookNameLabel->setObjectName(QString::fromUtf8("BookNameLabel"));
        BookNameLabel->setFont(font);

        verticalLayout->addWidget(BookNameLabel);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        ISBNNameLabel = new QLabel(verticalLayoutWidget);
        ISBNNameLabel->setObjectName(QString::fromUtf8("ISBNNameLabel"));
        ISBNNameLabel->setFont(font);

        verticalLayout->addWidget(ISBNNameLabel);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        StatusLabel = new QLabel(verticalLayoutWidget);
        StatusLabel->setObjectName(QString::fromUtf8("StatusLabel"));
        StatusLabel->setFont(font);

        verticalLayout->addWidget(StatusLabel);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        Borrower = new QLabel(verticalLayoutWidget);
        Borrower->setObjectName(QString::fromUtf8("Borrower"));
        Borrower->setFont(font);

        verticalLayout->addWidget(Borrower);

        BorrowBook = new QPushButton(verticalLayoutWidget);
        BorrowBook->setObjectName(QString::fromUtf8("BorrowBook"));

        verticalLayout->addWidget(BorrowBook);


        retranslateUi(borrow);

        QMetaObject::connectSlotsByName(borrow);
    } // setupUi

    void retranslateUi(QWidget *borrow)
    {
        borrow->setWindowTitle(QCoreApplication::translate("borrow", "\345\200\237\344\271\246", nullptr));
        BookLabel->setText(QString());
        label->setText(QCoreApplication::translate("borrow", "\350\257\267\350\276\223\345\205\245\350\246\201\345\200\237\347\232\204\344\271\246", nullptr));
        CheckButton->setText(QCoreApplication::translate("borrow", "\346\237\245\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("borrow", "\344\271\246\345\220\215", nullptr));
        BookNameLabel->setText(QString());
        label_4->setText(QCoreApplication::translate("borrow", "ISBN", nullptr));
        ISBNNameLabel->setText(QString());
        label_6->setText(QCoreApplication::translate("borrow", "\345\200\237\351\230\205\347\212\266\346\200\201", nullptr));
        StatusLabel->setText(QString());
        label_7->setText(QCoreApplication::translate("borrow", "\345\200\237\344\271\246\344\272\272", nullptr));
        Borrower->setText(QString());
        BorrowBook->setText(QCoreApplication::translate("borrow", "\345\200\237\351\230\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class borrow: public Ui_borrow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROW_H
