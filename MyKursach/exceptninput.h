#ifndef EXCEPTNINPUT_H
#define EXCEPTNINPUT_H

#include <QMainWindow>
#include "exceptn.h"
#include<QFile>

namespace Ui {
class ExceptnInput;
}

class ExceptnInput : public Exceptn
{
    Q_OBJECT

public:
    explicit ExceptnInput(QWidget *parent = 0);
    ~ExceptnInput();
    ExceptnInput(QString nameException) : Exceptn(nameException) {}
    int ExResult1();
    int ExResult2();

private:
    Ui::ExceptnInput *ui;
};

#endif // EXCEPTNINPUT_H

