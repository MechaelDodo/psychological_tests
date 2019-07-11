#ifndef TEST_1Q7_H
#define TEST_1Q7_H

#include <QMainWindow>
#include "test_1q6.h"

namespace Ui {
class Test_1q7;
}

class Test_1q7 : public Test_1q6
{
    Q_OBJECT

public:
    explicit Test_1q7(QWidget *parent = 0);
    ~Test_1q7();

private slots:

    void on_backButton_for_q6_clicked();

    void on_radioButton_17_clicked();
    void on_radioButton_27_clicked();
    void on_radioButton_37_clicked();

private:
    Ui::Test_1q7 *ui;
};

#endif // TEST_1Q7_H
