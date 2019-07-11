#include "test_2q5.h"
#include "ui_test_2q5.h"
#include "test_2q4.h"
#include "test_2q6.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>

Test_2q5::Test_2q5(QWidget *parent) :
    Test_2q4(parent),
    ui(new Ui::Test_2q5)
{
    ui->setupUi(this);
    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
}

Test_2q5::~Test_2q5()
{
    delete ui;
}

void Test_2q5::on_backButton_for_q4_clicked()
{
    Test_2q4 *wnd=new Test_2q4;
    wnd->show();
    Test_2q5::close();
}

void Test_2q5::on_radioButton_15_clicked()
{
    QFile mFile(".\\test_1_q5.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_15->minimumWidth()+2;

    mFile.close();
    Test_2q6 *wnd=new Test_2q6;
    wnd->show();

    Test_2q5::close();
}

void Test_2q5::on_radioButton_25_clicked()
{
    QFile mFile(".\\test_1_q5.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_25->minimumWidth()+4;

    mFile.close();
    Test_2q6 *wnd=new Test_2q6;
    wnd->show();

    Test_2q5::close();
}

void Test_2q5::on_radioButton_35_clicked()
{
    QFile mFile(".\\test_1_q5.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_35->minimumWidth();

    mFile.close();
    Test_2q6 *wnd=new Test_2q6;
    wnd->show();

    Test_2q5::close();
}
