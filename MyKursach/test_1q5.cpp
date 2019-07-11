#include "test_1q5.h"
#include "ui_test_1q5.h"
#include "test_1q4.h"
#include "test_1q6.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>

Test_1q5::Test_1q5(QWidget *parent) :
    Test_1q4(parent),
    ui(new Ui::Test_1q5)
{
    ui->setupUi(this);
    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
}

Test_1q5::~Test_1q5()
{
    delete ui;
}

void Test_1q5::on_backButton_for_q4_clicked()
{
    Test_1q4 *wnd=new Test_1q4;
    wnd->show();
    Test_1q5::close();
}

void Test_1q5::on_radioButton_15_clicked()
{
    QFile mFile(".\\test_1_q5.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_15->minimumWidth()+2;

    mFile.close();
    Test_1q6 *wnd=new Test_1q6;
    wnd->show();

    Test_1q5::close();
}

void Test_1q5::on_radioButton_25_clicked()
{
    QFile mFile(".\\test_1_q5.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_25->minimumWidth()+1;

    mFile.close();
    Test_1q6 *wnd=new Test_1q6;
    wnd->show();

    Test_1q5::close();
}

void Test_1q5::on_radioButton_35_clicked()
{
    QFile mFile(".\\test_1_q5.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_35->minimumWidth();

    mFile.close();
    Test_1q6 *wnd=new Test_1q6;
    wnd->show();

    Test_1q5::close();
}
