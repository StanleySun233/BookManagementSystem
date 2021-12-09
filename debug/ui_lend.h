/********************************************************************************
** Form generated from reading UI file 'lend.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEND_H
#define UI_LEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lend
{
public:
    QLabel *BookLabel;
    QPushButton *SerachButton;
    QTextEdit *SearchText;

    void setupUi(QWidget *lend)
    {
        if (lend->objectName().isEmpty())
            lend->setObjectName(QString::fromUtf8("lend"));
        lend->setEnabled(true);
        lend->resize(642, 412);
        BookLabel = new QLabel(lend);
        BookLabel->setObjectName(QString::fromUtf8("BookLabel"));
        BookLabel->setGeometry(QRect(360, 100, 221, 251));
        SerachButton = new QPushButton(lend);
        SerachButton->setObjectName(QString::fromUtf8("SerachButton"));
        SerachButton->setGeometry(QRect(160, 90, 141, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        SerachButton->setFont(font);
        SearchText = new QTextEdit(lend);
        SearchText->setObjectName(QString::fromUtf8("SearchText"));
        SearchText->setGeometry(QRect(10, 10, 611, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(24);
        SearchText->setFont(font1);
        SearchText->setFrameShadow(QFrame::Sunken);

        retranslateUi(lend);

        QMetaObject::connectSlotsByName(lend);
    } // setupUi

    void retranslateUi(QWidget *lend)
    {
        lend->setWindowTitle(QCoreApplication::translate("lend", "\350\277\230\344\271\246", nullptr));
        BookLabel->setText(QString());
        SerachButton->setText(QCoreApplication::translate("lend", "\350\277\230\344\271\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lend: public Ui_lend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEND_H
