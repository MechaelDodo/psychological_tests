#ifndef TEST_2QU3_H
#define TEST_2QU3_H



#include <QMainWindow>
#include "test_2q2.h"

namespace Ui {
class Test_2qu3;
}

class Test_2qu3 : public Test_2q2
{
    Q_OBJECT

public:
    explicit Test_2qu3(QWidget *parent = 0);
    ~Test_2qu3();

private slots:

    void on_backButton_for_q2_clicked();

    void on_radioButton_13_clicked();
    void on_radioButton_23_clicked();
    void on_radioButton_33_clicked();

private:
    Ui::Test_2qu3 *ui;
};


#endif // TEST_2QU3_H
