#include "test_2q2.h"
#include "ui_test_2q2.h"
#include "test_2.h"
#include "test_2qu3.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>

Test_2q2::Test_2q2(QWidget *parent) :
    Test_2(parent),
    ui(new Ui::Test_2q2)
{
    ui->setupUi(this);

    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
}

Test_2q2::~Test_2q2()
{
    delete ui;
}



void Test_2q2::on_backButton_for_q1_clicked()
{
    Test_2 *wnd=new Test_2;
    wnd->show();
    Test_2q2::close();
}

void Test_2q2::on_radioButton_12_clicked()
{
    QFile mFile(".\\test_1_q2.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_12->minimumWidth()+2;

    mFile.close();

    Test_2qu3 *wnd=new Test_2qu3;
    wnd->show();
    Test_2q2::close();
}

void Test_2q2::on_radio2Button_22_clicked()
{
    QFile mFile(".\\test_1_q2.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radio2Button_22->minimumWidth()+4;

    mFile.close();

    Test_2qu3 *wnd=new Test_2qu3;
    wnd->show();
    Test_2q2::close();
}

void Test_2q2::on_radio2Button_32_clicked()
{
    QFile mFile(".\\test_1_q2.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radio2Button_32->minimumWidth();

    mFile.close();

    Test_2qu3 *wnd=new Test_2qu3;
    wnd->show();
    Test_2q2::close();
}
