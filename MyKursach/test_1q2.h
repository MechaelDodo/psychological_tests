#ifndef TEST_1Q2_H
#define TEST_1Q2_H

#include <QMainWindow>
#include "test_1.h"

namespace Ui {
class Test_1q2;
}

class Test_1q2 : public Test_1
{
    Q_OBJECT

public:
    explicit Test_1q2(QWidget *parent = 0);
    ~Test_1q2();

private slots:

    void on_backButton_for_q1_clicked();

    void on_radioButton_1_clicked();
    void on_radioButton_22_clicked();
    void on_radioButton_32_clicked();

private:
    Ui::Test_1q2 *ui;
};

#endif // TEST_1Q2_H
