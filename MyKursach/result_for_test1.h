#ifndef RESULT_FOR_TEST1_H
#define RESULT_FOR_TEST1_H

#include <QMainWindow>
#include "test_1q7.h"
#include<QMessageBox>


namespace Ui {
class Result_for_Test1;
}

class Result_for_Test1 : public Test_1q7
{
    Q_OBJECT

public:
    explicit Result_for_Test1(QWidget *parent = 0);
    ~Result_for_Test1();




private slots:

    void readFiles_Test1();
    void on_backButton_for_q10_clicked();

    void on_WindowButton_clicked();


    void on_resultButton_clicked();

private:
    Ui::Result_for_Test1 *ui;
};

#endif // RESULT_FOR_TEST1_H
