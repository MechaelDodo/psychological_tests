#include "test_2qu3.h"
#include "ui_test_2qu3.h"
#include "test_2q2.h"
#include "test_2q4.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>

Test_2qu3::Test_2qu3(QWidget *parent) :
    Test_2q2(parent),
    ui(new Ui::Test_2qu3)
{
    ui->setupUi(this);
    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
}

Test_2qu3::~Test_2qu3()
{
    delete ui;
}

void Test_2qu3::on_backButton_for_q2_clicked()
{
    Test_2q2 *wnd=new Test_2q2;
    wnd->show();
    Test_2qu3::close();
}


void Test_2qu3::on_radioButton_13_clicked()
{
    QFile mFile(".\\test_1_qu3.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_13->minimumWidth()+2;

    mFile.close();
    Test_2q4 *wnd=new Test_2q4;
    wnd->show();

    Test_2qu3::close();
}

void Test_2qu3::on_radioButton_23_clicked()
{
    QFile mFile(".\\test_1_qu3.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_23->minimumWidth()+4;

    mFile.close();

    Test_2q4 *wnd=new Test_2q4;
    wnd->show();

   Test_2qu3::close();
}

void Test_2qu3::on_radioButton_33_clicked()
{
    QFile mFile(".\\test_1_qu3.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_33->minimumWidth();

    mFile.close();

    Test_2q4 *wnd=new Test_2q4;
    wnd->show();

    Test_2qu3::close();
}
