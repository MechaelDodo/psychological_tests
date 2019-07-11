#ifndef TEST_1Q4_H
#define TEST_1Q4_H

#include <QMainWindow>
#include "test_1qu3.h"

namespace Ui {
class Test_1q4;
}

class Test_1q4 : public Test_1qu3
{
    Q_OBJECT

public:
    explicit Test_1q4(QWidget *parent = 0);
    ~Test_1q4();
private slots:

    void on_backButton_for_q3_clicked();

    void on_radioButton_14_clicked();
    void on_radioButton_24_clicked();
    void on_radioButton_34_clicked();

private:
    Ui::Test_1q4 *ui;
};

#endif // TEST_1Q4_H
