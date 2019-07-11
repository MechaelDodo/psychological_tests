#include "test_2q4.h"
#include "ui_test_2q4.h"
#include "test_2qu3.h"
#include "test_2q5.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>

Test_2q4::Test_2q4(QWidget *parent) :
    Test_2qu3(parent),
    ui(new Ui::Test_2q4)
{
    ui->setupUi(this);
    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
}

Test_2q4::~Test_2q4()
{
    delete ui;
}


void Test_2q4::on_backButton_for_q3_clicked()
{
    Test_2qu3 *wnd=new Test_2qu3;
    wnd->show();
    Test_2q4::close();
}

void Test_2q4::on_radioButton_14_clicked()
{
    QFile mFile(".\\test_1_q4.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_14->minimumWidth()+4;

    mFile.close();
    Test_2q5 *wnd=new Test_2q5;
    wnd->show();

    Test_2q4::close();
}

void Test_2q4::on_radioButton_24_clicked()
{
    QFile mFile(".\\test_1_q4.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_24->minimumWidth()+2;

    mFile.close();
    Test_2q5 *wnd=new Test_2q5;
    wnd->show();

    Test_2q4::close();
}

void Test_2q4::on_radioButton_34_clicked()
{
    QFile mFile(".\\test_1_q4.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_34->minimumWidth();

    mFile.close();
    Test_2q5 *wnd=new Test_2q5;
    wnd->show();

    Test_2q4::close();
}
