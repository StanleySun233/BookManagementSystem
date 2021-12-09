#ifndef ERROR_H
#define ERROR_H

#include "string"
#include "QLabel"
#include <QWidget>
using namespace std;

namespace Ui {
class error;
}

class error : public QWidget
{
    Q_OBJECT

public:
    explicit error(QWidget *parent = nullptr);
    ~error();
    void ShowText(string s);

private:
    Ui::error *ui;
};

#endif // ERROR_H
