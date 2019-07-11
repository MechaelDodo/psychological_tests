#include "test_1q2.h"
#include "ui_test_1q2.h"
#include "test_1.h"
#include "test_1qu3.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>

Test_1q2::Test_1q2(QWidget *parent) :
    Test_1(parent),
    ui(new Ui::Test_1q2)
{
    ui->setupUi(this);

    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
}

Test_1q2::~Test_1q2()
{
    delete ui;
}



void Test_1q2::on_backButton_for_q1_clicked()
{
    Test_1 *wnd=new Test_1;
    wnd->show();
    Test_1q2::close();
}

void Test_1q2::on_radioButton_1_clicked()
{
    QFile mFile(".\\test_1_q2.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_1->minimumWidth()+2;

    mFile.close();

    Test_1qu3 *wnd=new Test_1qu3;
    wnd->show();
    Test_1q2::close();
}

void Test_1q2::on_radioButton_22_clicked()
{
    QFile mFile(".\\test_1_q2.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_22->minimumWidth()+1;

    mFile.close();

    Test_1qu3 *wnd=new Test_1qu3;
    wnd->show();
    Test_1q2::close();
}

void Test_1q2::on_radioButton_32_clicked()
{
    QFile mFile(".\\test_1_q2.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_32->minimumWidth();

    mFile.close();

    Test_1qu3 *wnd=new Test_1qu3;
    wnd->show();
    Test_1q2::close();
}
