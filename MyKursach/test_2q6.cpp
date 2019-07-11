#include "test_2q6.h"
#include "ui_test_2q6.h"
#include "test_2q5.h"
#include "result_for_test2.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>

Test_2q6::Test_2q6(QWidget *parent) :
    Test_2q5(parent),
    ui(new Ui::Test_2q6)
{
    ui->setupUi(this);
    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
}

Test_2q6::~Test_2q6()
{
    delete ui;
}

void Test_2q6::on_backButton_for_q5_clicked()
{
    Test_2q5 *wnd=new Test_2q5;
    wnd->show();
    Test_2q6::close();
}

void Test_2q6::on_radioButton_16_clicked()
{
    QFile mFile(".\\test_1_q6.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_16->minimumWidth()+4;

    mFile.close();
    Result_for_Test2 *wnd=new Result_for_Test2;
    wnd->show();

    Test_2q6::close();
}

void Test_2q6::on_radioButton_26_clicked()
{
    QFile mFile(".\\test_1_q6.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_26->minimumWidth()+2;

    mFile.close();
    Result_for_Test2 *wnd=new Result_for_Test2;
    wnd->show();

    Test_2q6::close();
}

void Test_2q6::on_radioButton_36_clicked()
{
    QFile mFile(".\\test_1_q6.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_36->minimumWidth();

    mFile.close();
    Result_for_Test2 *wnd=new Result_for_Test2;
    wnd->show();

    Test_2q6::close();
}
