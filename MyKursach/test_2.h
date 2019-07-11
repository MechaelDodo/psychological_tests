#ifndef TEST_2_H
#define TEST_2_H

#include <QMainWindow>
#include "choicewindow.h"

namespace Ui {
class Test_2;
}

class Test_2 : public ChoiceWindow
{
    Q_OBJECT

public:
    explicit Test_2(QWidget *parent = 0);
    ~Test_2();

private slots:
    void on_backButton_for_Choice_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_clicked();

    void on_radioButton_3_clicked();

private:
    Ui::Test_2 *ui;




};

#endif // TEST_2_H
