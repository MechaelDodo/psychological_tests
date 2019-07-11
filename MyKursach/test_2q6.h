#ifndef TEST_2Q6_H
#define TEST_2Q6_H

#include <QMainWindow>
#include "test_2q5.h"

namespace Ui {
class Test_2q6;
}

class Test_2q6 : public Test_2q5
{
    Q_OBJECT

public:
    explicit Test_2q6(QWidget *parent = 0);
    ~Test_2q6();

private slots:

    void on_backButton_for_q5_clicked();

    void on_radioButton_16_clicked();
    void on_radioButton_26_clicked();
    void on_radioButton_36_clicked();

private:
    Ui::Test_2q6 *ui;
};

#endif // TEST_2Q6_H
