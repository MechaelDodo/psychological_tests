#include "test_1.h"
#include "test_1q2.h"
#include "ui_test_1.h"
#include "choicewindow.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>

Test_1::Test_1(QWidget *parent) :
    ChoiceWindow(parent),
    ui(new Ui::Test_1)
{
    ui->setupUi(this);
    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->backButton_for_Choice,SIGNAL(clicked(bool)),this,SLOT(on_backButton_for_Choice_clicked()));
}

Test_1::~Test_1()
{
    delete ui;
}


void Test_1::on_backButton_for_Choice_clicked()
{
    ChoiceWindow *wnd=new ChoiceWindow;
    wnd->show();
    Test_1::close();
}



void Test_1::on_radioButton_2_clicked()
{
    QFile mFile(".\\test_1_q1.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_2->minimumWidth()+1;

   mFile.close();


    Test_1q2 *wnd=new Test_1q2;
    wnd->show();
    Test_1::close();


}

void Test_1::on_radioButton_clicked()
{
    QFile mFile(".\\test_1_q1.bin");


    if(!mFile.open(QFile::WriteOnly | QFile::Text))

    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);


    stream<<ui->radioButton->minimumWidth()+2;

    mFile.close();

    Test_1q2 *wnd=new Test_1q2;
    wnd->show();
    Test_1::close();
}

void Test_1::on_radioButton_3_clicked()
{
    QFile mFile(".\\test_1_q1.bin");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);



    stream<<ui->radioButton_3->minimumWidth();

    mFile.close();

    Test_1q2 *wnd=new Test_1q2;
    wnd->show();
    Test_1::close();
}
