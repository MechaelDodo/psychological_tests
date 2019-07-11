#include "exceptninput.h"
#include "exceptn.h"
#include "ui_exceptninput.h"
#include<QMessageBox>
#include<QFile>
#include<QTextStream>
#include<QString>

ExceptnInput::ExceptnInput(QWidget *parent) :
    Exceptn(parent),
    ui(new Ui::ExceptnInput)
{
    ui->setupUi(this);
}

ExceptnInput::~ExceptnInput()
{
    delete ui;
}

int ExceptnInput::ExResult1()
{
    QFile mFile1(".\\test_1_q1.bin");
    QFile mFile2(".\\test_1_q2.bin");
    QFile mFile3(".\\test_1_qu3.bin");
    QFile mFile4(".\\test_1_q4.bin");
    QFile mFile5(".\\test_1_q5.bin");
    QFile mFile6(".\\test_1_q6.bin");
    QFile mFile7(".\\test_1_q7.bin");
    bool i;
    do{
        i = false;
        if(!mFile1.open(QFile::ReadOnly | QFile::Text)||!mFile2.open(QFile::ReadOnly | QFile::Text)||!mFile3.open(QFile::ReadOnly | QFile::Text)||!mFile4.open(QFile::ReadOnly | QFile::Text)||!mFile5.open(QFile::ReadOnly | QFile::Text)||!mFile6.open(QFile::ReadOnly | QFile::Text)||!mFile7.open(QFile::ReadOnly | QFile::Text))
        {
             _flushall();
             throw QMessageBox::information(this,"Error","puth not correct");
             i = true;
        }
        } while (i);

QTextStream stream1(&mFile1);
QString buffer1=stream1.readAll();

QTextStream stream2(&mFile2);
QString buffer2=stream2.readAll();

QTextStream stream3(&mFile3);
QString buffer3=stream3.readAll();

QTextStream stream4(&mFile4);
QString buffer4=stream4.readAll();

QTextStream stream5(&mFile5);
QString buffer5=stream5.readAll();

QTextStream stream6(&mFile6);
QString buffer6=stream6.readAll();

QTextStream stream7(&mFile7);
QString buffer7=stream7.readAll();



int sum=buffer1.toInt()+buffer2.toInt()+buffer3.toInt()+buffer4.toInt()+buffer5.toInt()+buffer6.toInt()+buffer7.toInt();
return sum;
}
int ExceptnInput::ExResult2()
{
    QFile mFile1(".\\test_1_q1.txt");
    QFile mFile2(".\\test_1_q2.txt");
    QFile mFile3(".\\test_1_qu3.txt");
    QFile mFile4(".\\test_1_q4.txt");
    QFile mFile5(".\\test_1_q5.txt");
    QFile mFile6(".\\test_1_q6.txt");
    bool i;
    do{
        i = false;
        if(!mFile1.open(QFile::ReadOnly | QFile::Text)||!mFile2.open(QFile::ReadOnly | QFile::Text)||!mFile3.open(QFile::ReadOnly | QFile::Text)||!mFile4.open(QFile::ReadOnly | QFile::Text)||!mFile5.open(QFile::ReadOnly | QFile::Text)||!mFile6.open(QFile::ReadOnly | QFile::Text))
        {
             //_flushall();
             throw QMessageBox::information(this,"Error","puth not correct");
             i = true;

        }
        } while (i);

    QTextStream stream1(&mFile1);
    QString buffer1=stream1.readAll();

    QTextStream stream2(&mFile2);
    QString buffer2=stream2.readAll();

    QTextStream stream3(&mFile3);
    QString buffer3=stream3.readAll();

    QTextStream stream4(&mFile4);
    QString buffer4=stream4.readAll();

    QTextStream stream5(&mFile5);
    QString buffer5=stream5.readAll();

    QTextStream stream6(&mFile6);
    QString buffer6=stream6.readAll();





    int sum=buffer1.toInt()+buffer2.toInt()+buffer3.toInt()+buffer4.toInt()+buffer5.toInt()+buffer6.toInt();
    return sum;

}


