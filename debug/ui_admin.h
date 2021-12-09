/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *AccountButton;
    QPushButton *PasswordButton;
    QPushButton *AuthButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextEdit *AccountText;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *PasswordLabel;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QTextEdit *PasswordSet;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLabel *AuthLabel;

    void setupUi(QWidget *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(501, 329);
        verticalLayoutWidget = new QWidget(Admin);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(130, 120, 201, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        AccountButton = new QPushButton(verticalLayoutWidget);
        AccountButton->setObjectName(QString::fromUtf8("AccountButton"));

        verticalLayout->addWidget(AccountButton);

        PasswordButton = new QPushButton(verticalLayoutWidget);
        PasswordButton->setObjectName(QString::fromUtf8("PasswordButton"));

        verticalLayout->addWidget(PasswordButton);

        AuthButton = new QPushButton(verticalLayoutWidget);
        AuthButton->setObjectName(QString::fromUtf8("AuthButton"));

        verticalLayout->addWidget(AuthButton);

        verticalLayoutWidget_2 = new QWidget(Admin);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(170, 30, 211, 91));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        AccountText = new QTextEdit(verticalLayoutWidget_2);
        AccountText->setObjectName(QString::fromUtf8("AccountText"));

        verticalLayout_2->addWidget(AccountText);

        verticalLayoutWidget_3 = new QWidget(Admin);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 20, 160, 80));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        PasswordLabel = new QLabel(verticalLayoutWidget_3);
        PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));

        verticalLayout_3->addWidget(PasswordLabel);

        verticalLayoutWidget_4 = new QWidget(Admin);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(330, 130, 160, 91));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        PasswordSet = new QTextEdit(verticalLayoutWidget_4);
        PasswordSet->setObjectName(QString::fromUtf8("PasswordSet"));

        verticalLayout_4->addWidget(PasswordSet);

        verticalLayoutWidget_5 = new QWidget(Admin);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(10, 110, 111, 91));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        AuthLabel = new QLabel(verticalLayoutWidget_5);
        AuthLabel->setObjectName(QString::fromUtf8("AuthLabel"));

        verticalLayout_5->addWidget(AuthLabel);


        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QWidget *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "\347\256\241\347\220\206\345\221\230\346\223\215\344\275\234", nullptr));
        AccountButton->setText(QCoreApplication::translate("Admin", "\346\237\245\350\257\242\350\264\246\345\217\267", nullptr));
        PasswordButton->setText(QCoreApplication::translate("Admin", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        AuthButton->setText(QCoreApplication::translate("Admin", "\344\277\256\346\224\271\346\235\203\351\231\220", nullptr));
        label->setText(QCoreApplication::translate("Admin", "\350\264\246\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("Admin", "\345\257\206\347\240\201", nullptr));
        PasswordLabel->setText(QString());
        label_4->setText(QCoreApplication::translate("Admin", "\344\277\256\346\224\271\345\220\216\347\232\204\345\257\206\347\240\201", nullptr));
        label_5->setText(QCoreApplication::translate("Admin", "\350\264\246\345\217\267\346\235\203\351\231\220", nullptr));
        AuthLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
