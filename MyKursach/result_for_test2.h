#ifndef RESULT_FOR_TEST2_H
#define RESULT_FOR_TEST2_H

#include <QMainWindow>
#include "test_2q6.h"

namespace Ui {
class Result_for_Test2;
}

class Result_for_Test2 : public Test_2q6
{
    Q_OBJECT

public:
    explicit Result_for_Test2(QWidget *parent = 0);
    ~Result_for_Test2();


private slots:


    void readFiles_Test2();
    void on_backButton_for_q10_clicked();

    void on_WindowButton_clicked();


    void on_resultButton_clicked();

private:
    Ui::Result_for_Test2 *ui;
};

#endif // RESULT_FOR_TEST2_H
