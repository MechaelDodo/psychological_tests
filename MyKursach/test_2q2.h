#ifndef TEST_2Q2_H
#define TEST_2Q2_H

#include <QMainWindow>
#include "test_2.h"

namespace Ui {
class Test_2q2;
}

class Test_2q2 : public Test_2
{
    Q_OBJECT

public:
    explicit Test_2q2(QWidget *parent = 0);
    ~Test_2q2();

private slots:

    void on_backButton_for_q1_clicked();

    void on_radioButton_12_clicked();
    void on_radio2Button_22_clicked();
    void on_radio2Button_32_clicked();

private:
    Ui::Test_2q2 *ui;
};

#endif // TEST_2Q2_H
