#include "test_1qu3.h"
#include "ui_test_1qu3.h"
#include "test_1q2.h"
#include "test_1q4.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>

Test_1qu3::Test_1qu3(QWidget *parent) :
    Test_1q2(parent),
    ui(new Ui::Test_1qu3)
{
    ui->setupUi(this);
    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
}

Test_1qu3::~Test_1qu3()
{
    delete ui;
}

void Test_1qu3::on_backButton_for_q2_clicked()
{
    Test_1q2 *wnd=new Test_1q2;
    wnd->show();
    Test_1qu3::close();
}


void Test_1qu3::on_radioButton_13_clicked()
{
    QFile mFile(".\\test_1_qu3.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_13->minimumWidth()+2;

    mFile.close();
    Test_1q4 *wnd=new Test_1q4;
    wnd->show();

    Test_1qu3::close();
}

void Test_1qu3::on_radioButton_23_clicked()
{
    QFile mFile(".\\test_1_qu3.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_23->minimumWidth()+1;

    mFile.close();

    Test_1q4 *wnd=new Test_1q4;
    wnd->show();

   Test_1qu3::close();
}

void Test_1qu3::on_radioButton_33_clicked()
{
    QFile mFile(".\\test_1_qu3.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_33->minimumWidth();

    mFile.close();

    Test_1q4 *wnd=new Test_1q4;
    wnd->show();

    Test_1qu3::close();
}
