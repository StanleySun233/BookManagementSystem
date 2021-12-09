/********************************************************************************
** Form generated from reading UI file 'auth.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTH_H
#define UI_AUTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_auth
{
public:
    QPushButton *up;
    QPushButton *down;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *now;
    QLabel *present;
    QLabel *label_4;
    QLabel *label_2;

    void setupUi(QWidget *auth)
    {
        if (auth->objectName().isEmpty())
            auth->setObjectName(QString::fromUtf8("auth"));
        auth->resize(503, 339);
        up = new QPushButton(auth);
        up->setObjectName(QString::fromUtf8("up"));
        up->setGeometry(QRect(20, 240, 161, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        up->setFont(font);
        down = new QPushButton(auth);
        down->setObjectName(QString::fromUtf8("down"));
        down->setGeometry(QRect(310, 240, 161, 81));
        down->setFont(font);
        textEdit = new QTextEdit(auth);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(80, 50, 321, 51));
        label = new QLabel(auth);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 130, 101, 41));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        now = new QLabel(auth);
        now->setObjectName(QString::fromUtf8("now"));
        now->setGeometry(QRect(350, 180, 101, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(14);
        now->setFont(font1);
        now->setAlignment(Qt::AlignCenter);
        now->setIndent(0);
        present = new QLabel(auth);
        present->setObjectName(QString::fromUtf8("present"));
        present->setGeometry(QRect(50, 180, 121, 41));
        present->setFont(font1);
        present->setAlignment(Qt::AlignCenter);
        present->setIndent(0);
        label_4 = new QLabel(auth);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 130, 131, 41));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(auth);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 120, 91, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(72);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(auth);

        QMetaObject::connectSlotsByName(auth);
    } // setupUi

    void retranslateUi(QWidget *auth)
    {
        auth->setWindowTitle(QCoreApplication::translate("auth", "\344\277\256\346\224\271\346\235\203\351\231\220", nullptr));
        up->setText(QCoreApplication::translate("auth", "\345\215\207\347\272\247", nullptr));
        down->setText(QCoreApplication::translate("auth", "\351\231\215\347\272\247", nullptr));
        label->setText(QCoreApplication::translate("auth", "\345\275\223\345\211\215\347\255\211\347\272\247", nullptr));
        now->setText(QString());
        present->setText(QString());
        label_4->setText(QCoreApplication::translate("auth", "\345\215\207\347\272\247/\351\231\215\347\272\247\345\211\215\347\255\211\347\272\247", nullptr));
        label_2->setText(QCoreApplication::translate("auth", "\342\206\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class auth: public Ui_auth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTH_H
