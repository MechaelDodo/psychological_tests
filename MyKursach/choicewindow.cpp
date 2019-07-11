#include "choicewindow.h"
#include "ui_choicewindow.h"
#include "mainwindow.h"
#include "test_1.h"
#include "test_2.h"

ChoiceWindow::ChoiceWindow(QWidget *parent) :
   MainWindow(parent),
    ui(new Ui::ChoiceWindow)
{
    ui->setupUi(this);
    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->radioButton_for_Test1,SIGNAL(clicked()),this,SLOT(RadioButtonTest1()));
    connect(ui->radioButton_for_Test2,SIGNAL(clicked()),this,SLOT(RadioButtonTest2()));
    connect(ui->backButton_for_Choice,SIGNAL(clicked()),this,SLOT(BackButtonForWind()));
}

ChoiceWindow::~ChoiceWindow()
{
    delete ui;
}




void ChoiceWindow::RadioButtonTest1()
{

        Test_1 *wnd=new Test_1;
        wnd->show();
        ChoiceWindow::close();

}

void ChoiceWindow::RadioButtonTest2()
{
    Test_2 *wnd=new Test_2;
    wnd->show();
    ChoiceWindow::close();
}

void ChoiceWindow::BackButtonForWind()
{
    MainWindow *wnd=new MainWindow;
    wnd->show();
    ChoiceWindow::close();
}







