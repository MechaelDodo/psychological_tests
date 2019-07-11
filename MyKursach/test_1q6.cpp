#include "test_1q6.h"
#include "ui_test_1q6.h"
#include "test_1q5.h"
#include "test_1q7.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>

Test_1q6::Test_1q6(QWidget *parent) :
    Test_1q5(parent),
    ui(new Ui::Test_1q6)
{
    ui->setupUi(this);
    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
}

Test_1q6::~Test_1q6()
{
    delete ui;
}

void Test_1q6::on_backButton_for_q5_clicked()
{
    Test_1q5 *wnd=new Test_1q5;
    wnd->show();
    Test_1q6::close();
}

void Test_1q6::on_radioButton_16_clicked()
{
    QFile mFile(".\\test_1_q6.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_16->minimumWidth()+2;

    mFile.close();
    Test_1q7 *wnd=new Test_1q7;
    wnd->show();

    Test_1q6::close();
}

void Test_1q6::on_radioButton_26_clicked()
{
    QFile mFile(".\\test_1_q6.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_26->minimumWidth()+1;

    mFile.close();
    Test_1q7 *wnd=new Test_1q7;
    wnd->show();

    Test_1q6::close();
}

void Test_1q6::on_radioButton_36_clicked()
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
    Test_1q7 *wnd=new Test_1q7;
    wnd->show();

    Test_1q6::close();
}
