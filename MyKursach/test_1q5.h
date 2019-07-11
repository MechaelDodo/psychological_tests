#ifndef TEST_1Q5_H
#define TEST_1Q5_H

#include <QMainWindow>
#include "test_1q4.h"

namespace Ui {
class Test_1q5;
}

class Test_1q5 : public Test_1q4
{
    Q_OBJECT

public:
    explicit Test_1q5(QWidget *parent = 0);
    ~Test_1q5();

private slots:

    void on_backButton_for_q4_clicked();

    void on_radioButton_15_clicked();
    void on_radioButton_25_clicked();
    void on_radioButton_35_clicked();

private:
    Ui::Test_1q5 *ui;
};

#endif // TEST_1Q5_H
