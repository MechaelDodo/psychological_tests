#ifndef TEST_2Q5_H
#define TEST_2Q5_H

#include <QMainWindow>
#include "test_2q4.h"

namespace Ui {
class Test_2q5;
}

class Test_2q5 : public Test_2q4
{
    Q_OBJECT

public:
    explicit Test_2q5(QWidget *parent = 0);
    ~Test_2q5();

private slots:

    void on_backButton_for_q4_clicked();

    void on_radioButton_15_clicked();
    void on_radioButton_25_clicked();
    void on_radioButton_35_clicked();

private:
    Ui::Test_2q5 *ui;
};

#endif // TEST_2Q5_H
