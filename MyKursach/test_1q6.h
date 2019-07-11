#ifndef TEST_1Q6_H
#define TEST_1Q6_H

#include <QMainWindow>
#include "test_1q5.h"

namespace Ui {
class Test_1q6;
}

class Test_1q6 : public Test_1q5
{
    Q_OBJECT

public:
    explicit Test_1q6(QWidget *parent = 0);
    ~Test_1q6();

private slots:

    void on_backButton_for_q5_clicked();

    void on_radioButton_16_clicked();
    void on_radioButton_26_clicked();
    void on_radioButton_36_clicked();

private:
    Ui::Test_1q6 *ui;
};

#endif // TEST_1Q6_H
