/********************************************************************************
** Form generated from reading UI file 'bookui.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKUI_H
#define UI_BOOKUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bookui
{
public:
    QLabel *WelcomeText;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *BorrowButton;
    QPushButton *LendButton;
    QPushButton *SearchButton;
    QPushButton *AdminButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *SelfPic;
    QVBoxLayout *verticalLayout;
    QLabel *AuthLabel;
    QLabel *AccountLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *WelcomeText_2;

    void setupUi(QWidget *bookui)
    {
        if (bookui->objectName().isEmpty())
            bookui->setObjectName(QString::fromUtf8("bookui"));
        bookui->resize(948, 677);
        WelcomeText = new QLabel(bookui);
        WelcomeText->setObjectName(QString::fromUtf8("WelcomeText"));
        WelcomeText->setGeometry(QRect(10, 0, 381, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(24);
        WelcomeText->setFont(font);
        WelcomeText->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_2 = new QWidget(bookui);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(40, 130, 111, 311));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        BorrowButton = new QPushButton(verticalLayoutWidget_2);
        BorrowButton->setObjectName(QString::fromUtf8("BorrowButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(20);
        BorrowButton->setFont(font1);

        verticalLayout_2->addWidget(BorrowButton);

        LendButton = new QPushButton(verticalLayoutWidget_2);
        LendButton->setObjectName(QString::fromUtf8("LendButton"));
        LendButton->setFont(font1);

        verticalLayout_2->addWidget(LendButton);

        SearchButton = new QPushButton(verticalLayoutWidget_2);
        SearchButton->setObjectName(QString::fromUtf8("SearchButton"));
        SearchButton->setFont(font1);

        verticalLayout_2->addWidget(SearchButton);

        AdminButton = new QPushButton(verticalLayoutWidget_2);
        AdminButton->setObjectName(QString::fromUtf8("AdminButton"));
        AdminButton->setFont(font1);

        verticalLayout_2->addWidget(AdminButton);

        horizontalLayoutWidget = new QWidget(bookui);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(610, 20, 271, 111));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        SelfPic = new QLabel(horizontalLayoutWidget);
        SelfPic->setObjectName(QString::fromUtf8("SelfPic"));

        horizontalLayout->addWidget(SelfPic);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        AuthLabel = new QLabel(horizontalLayoutWidget);
        AuthLabel->setObjectName(QString::fromUtf8("AuthLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(12);
        AuthLabel->setFont(font2);

        verticalLayout->addWidget(AuthLabel);

        AccountLabel = new QLabel(horizontalLayoutWidget);
        AccountLabel->setObjectName(QString::fromUtf8("AccountLabel"));
        AccountLabel->setFont(font2);

        verticalLayout->addWidget(AccountLabel);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayoutWidget = new QWidget(bookui);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(190, 170, 688, 460));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/img/book/0001484524.jpg")));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/img/book/0001956604.jpg")));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/img/book/0002158434.jpg")));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/img/book/0002163306.jpg")));

        horizontalLayout_3->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/img/book/0002169681.jpg")));

        horizontalLayout_3->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/img/img/book/0002182718.jpg")));

        horizontalLayout_3->addWidget(label_6);


        verticalLayout_3->addLayout(horizontalLayout_3);

        WelcomeText_2 = new QLabel(bookui);
        WelcomeText_2->setObjectName(QString::fromUtf8("WelcomeText_2"));
        WelcomeText_2->setGeometry(QRect(200, 70, 381, 91));
        WelcomeText_2->setFont(font);
        WelcomeText_2->setAlignment(Qt::AlignCenter);

        retranslateUi(bookui);

        QMetaObject::connectSlotsByName(bookui);
    } // setupUi

    void retranslateUi(QWidget *bookui)
    {
        bookui->setWindowTitle(QCoreApplication::translate("bookui", "\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        WelcomeText->setText(QCoreApplication::translate("bookui", "\346\254\242\350\277\216\344\275\277\347\224\250\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        BorrowButton->setText(QCoreApplication::translate("bookui", "\345\200\237\344\271\246", nullptr));
        LendButton->setText(QCoreApplication::translate("bookui", "\350\277\230\344\271\246", nullptr));
        SearchButton->setText(QCoreApplication::translate("bookui", "\346\237\245\350\257\242", nullptr));
        AdminButton->setText(QCoreApplication::translate("bookui", "\347\256\241\347\220\206\345\221\230", nullptr));
        SelfPic->setText(QString());
        AuthLabel->setText(QCoreApplication::translate("bookui", "TextLabel", nullptr));
        AccountLabel->setText(QCoreApplication::translate("bookui", "TextLabel", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        WelcomeText_2->setText(QCoreApplication::translate("bookui", "\346\226\260\344\271\246\351\200\237\351\200\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookui: public Ui_bookui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKUI_H
