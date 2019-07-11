#ifndef TEST_2Q4_H
#define TEST_2Q4_H


#include <QMainWindow>
#include "test_2qu3.h"

namespace Ui {
class Test_2q4;
}

class Test_2q4 : public Test_2qu3
{
    Q_OBJECT

public:
    explicit Test_2q4(QWidget *parent = 0);
    ~Test_2q4();
private slots:

    void on_backButton_for_q3_clicked();

    void on_radioButton_14_clicked();
    void on_radioButton_24_clicked();
    void on_radioButton_34_clicked();

private:
    Ui::Test_2q4 *ui;
};

#endif // TEST_2Q4_H
