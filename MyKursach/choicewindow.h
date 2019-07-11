#ifndef CHOICEWINDOW_H
#define CHOICEWINDOW_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class ChoiceWindow;
}

class ChoiceWindow : public MainWindow
{
    Q_OBJECT

public:
    explicit ChoiceWindow(QWidget *parent = 0);
    ~ChoiceWindow();

private slots:
    void RadioButtonTest1();
    void RadioButtonTest2();
    void BackButtonForWind();


private:
    Ui::ChoiceWindow *ui;


};

#endif // CHOICEWINDOW_H
