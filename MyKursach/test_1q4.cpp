#include "test_1q4.h"
#include "ui_test_1q4.h"
#include "test_1qu3.h"
#include "test_1q5.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>

Test_1q4::Test_1q4(QWidget *parent) :
    Test_1qu3(parent),
    ui(new Ui::Test_1q4)
{
    ui->setupUi(this);
    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
}

Test_1q4::~Test_1q4()
{
    delete ui;
}


void Test_1q4::on_backButton_for_q3_clicked()
{
    Test_1qu3 *wnd=new Test_1qu3;
    wnd->show();
    Test_1q4::close();
}

void Test_1q4::on_radioButton_14_clicked()
{
    QFile mFile(".\\test_1_q4.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_14->minimumWidth()+2;

    mFile.close();
    Test_1q5 *wnd=new Test_1q5;
    wnd->show();

    Test_1q4::close();
}

void Test_1q4::on_radioButton_24_clicked()
{
    QFile mFile(".\\test_1_q4.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_24->minimumWidth()+1;

    mFile.close();
    Test_1q5 *wnd=new Test_1q5;
    wnd->show();

    Test_1q4::close();
}

void Test_1q4::on_radioButton_34_clicked()
{
    QFile mFile(".\\test_1_q4.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_34->minimumWidth();

    mFile.close();
    Test_1q5 *wnd=new Test_1q5;
    wnd->show();

    Test_1q4::close();
}
