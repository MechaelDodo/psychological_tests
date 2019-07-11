#include "test_2.h"
#include "test_2q2.h"
#include "ui_test_2.h"
#include "choicewindow.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>

Test_2::Test_2(QWidget *parent) :
    ChoiceWindow(parent),
    ui(new Ui::Test_2)
{
    ui->setupUi(this);
    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->backButton_for_Choice,SIGNAL(clicked(bool)),this,SLOT(on_backButton_for_Choice_clicked()));
}

Test_2::~Test_2()
{
    delete ui;
}


void Test_2::on_backButton_for_Choice_clicked()
{
    ChoiceWindow *wnd=new ChoiceWindow;
    wnd->show();
    Test_2::close();
}



void Test_2::on_radioButton_2_clicked()
{
    QFile mFile(".\\test_1_q1.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);

    stream<<ui->radioButton_2->minimumWidth()+2;

   mFile.close();


    Test_2q2 *wnd=new Test_2q2;
    wnd->show();
    Test_2::close();


}

void Test_2::on_radioButton_clicked()
{
    QFile mFile(".\\test_1_q1.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);


    stream<<ui->radioButton->minimumWidth();

    mFile.close();

    Test_2q2 *wnd=new Test_2q2;
    wnd->show();
    Test_2::close();
}

void Test_2::on_radioButton_3_clicked()
{
    QFile mFile(".\\test_1_q1.txt");

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

    QTextStream stream(&mFile);



    stream<<ui->radioButton_3->minimumWidth()+4;

    mFile.close();

    Test_2q2 *wnd=new Test_2q2;
    wnd->show();
    Test_2::close();
}
