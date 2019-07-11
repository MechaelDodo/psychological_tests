#ifndef TEST_1QU3_H
#define TEST_1QU3_H

#include <QMainWindow>
#include "test_1q2.h"

namespace Ui {
class Test_1qu3;
}

class Test_1qu3 : public Test_1q2
{
    Q_OBJECT

public:
    explicit Test_1qu3(QWidget *parent = 0);
    ~Test_1qu3();

private slots:

    void on_backButton_for_q2_clicked();

    void on_radioButton_13_clicked();
    void on_radioButton_23_clicked();
    void on_radioButton_33_clicked();

private:
    Ui::Test_1qu3 *ui;
};

#endif // TEST_1QU3_H
