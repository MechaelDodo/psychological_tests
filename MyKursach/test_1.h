#ifndef TEST_1_H
#define TEST_1_H

#include <QMainWindow>
#include "choicewindow.h"

namespace Ui {
class Test_1;
}

class Test_1 : public ChoiceWindow
{
    Q_OBJECT

public:
    explicit Test_1(QWidget *parent = 0);
    ~Test_1();

private slots:
    void on_backButton_for_Choice_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_clicked();

    void on_radioButton_3_clicked();

private:
    Ui::Test_1 *ui;




};

#endif // TEST_1_H
