#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "choicewindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->closeButton_for_Begin,SIGNAL(clicked(bool)),this,SLOT(close()));

}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_nachaloButton_clicked()
{

    ChoiceWindow *wnd=new ChoiceWindow;
    wnd->show();
    MainWindow::close();
}
