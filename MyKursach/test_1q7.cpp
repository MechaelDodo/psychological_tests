#include "test_1q7.h"
#include "ui_test_1q7.h"
#include "test_1q6.h"
#include "result_for_test1.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>

Test_1q7::Test_1q7(QWidget *parent) :
    Test_1q6(parent),
    ui(new Ui::Test_1q7)
{
    ui->setupUi(this);
    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
}

Test_1q7::~Test_1q7()
{
    delete ui;
}

void Test_1q7::on_backButton_for_q6_clicked()
{
    Test_1q6 *wnd=new Test_1q6;
    wnd->show();
    Test_1q7::close();
}

void Test_1q7::on_radioButton_17_clicked()
{
    QFile mFile(".\\test_1_q7.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_17->minimumWidth()+2;

    mFile.close();
    Result_for_Test1 *wnd=new Result_for_Test1;
    wnd->show();

    Test_1q7::close();
}

void Test_1q7::on_radioButton_27_clicked()
{
    QFile mFile(".\\test_1_q7.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_27->minimumWidth()+1;

    mFile.close();
    Result_for_Test1 *wnd=new Result_for_Test1;
    wnd->show();

    Test_1q7::close();
}

void Test_1q7::on_radioButton_37_clicked()
{
    QFile mFile(".\\test_1_q7.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_37->minimumWidth();

    mFile.close();
    Result_for_Test1 *wnd=new Result_for_Test1;
    wnd->show();

    Test_1q7::close();
}
