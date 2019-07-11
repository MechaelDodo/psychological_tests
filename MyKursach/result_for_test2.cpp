#include "result_for_test2.h"
#include "ui_result_for_test2.h"
#include "test_2q6.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>
#include "exceptninput.h"
#include <exception>
#include <iostream>
#include <conio.h>
#include<queue>

using namespace std;
Result_for_Test2::Result_for_Test2(QWidget *parent) :
    Test_2q6(parent),
    ui(new Ui::Result_for_Test2)
{
    ui->setupUi(this);
    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
}

Result_for_Test2::~Result_for_Test2()
{
    delete ui;
}


void Result_for_Test2::on_backButton_for_q10_clicked()
{
    Test_2q6 *wnd=new Test_2q6;
    wnd->show();
    Result_for_Test2::close();
}

void Result_for_Test2::on_WindowButton_clicked()
{
    MainWindow *wnd=new MainWindow;
    wnd->show();
    Result_for_Test2::close();
}


void Result_for_Test2::readFiles_Test2()
{

    ExceptnInput *e = new ExceptnInput;
    bool i = 0;
    QFile mFile1(".\\test_1_q1.txt");
    QFile mFile2(".\\test_1_q2.txt");
    QFile mFile3(".\\test_1_qu3.txt");
    QFile mFile4(".\\test_1_q4.txt");
    QFile mFile5(".\\test_1_q5.txt");
    QFile mFile6(".\\test_1_q6.txt");
    do {

            i = 0;
            try {
                e->ExResult2();

            }
            catch (char*str)
            {

                i = 1;
                cout << str << endl;
                _getch();
            }

            } while (i);

   /* if(!mFile1.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }
    if(!mFile2.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }
    if(!mFile3.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }
    if(!mFile4.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }
    if(!mFile5.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }
    if(!mFile6.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(this,"Error","puth not correct");
        return;
    }

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


    int sum=buffer1.toInt()+buffer2.toInt()+buffer3.toInt()+buffer4.toInt()+buffer5.toInt()+buffer6.toInt();*/
     QString MyBuffer;
     int sum=e->ExResult2();

     ui->resultButton->setText( MyBuffer.number(sum));

    queue<QString> arr;
    if(arr.empty())
    {
        arr.push((QString)"В вас бездна обаяния, но не слишком ли часто вы пользуетесь им для своих целей? Вам обычно прощают недостатки; вы ведь такая милая и не скупитесь на приятные слова, даже если они не соответствуют действительности: иногда чтобы сделать приятное, а иногда о более практической целью. Кое-кто упрекает вас в неестественности — и это, пожалуй, справедливо.");
        arr.push((QString)"Вы одарены обаянием и умеете пользоваться этим даром, чтобы сделать повседневность более приятной. Симпатии окружающих доставляют вам удовольствие, да и вам симпатичны все и каждый. Никто не считает, что вы ведете себя неестественно, никто не может вас упрекнуть в том, что вы перед кем-то заискиваете.");
        arr.push((QString)"Ваше обаяние связано с искренностью и непосредственностью, и именно эти черты симпатичны окружающим. Однако бывает, что это кого-то обижает. Вы пытаетесь быть со всеми милой и, хотя иногда взрываетесь, стараетесь остаться воспитанным человеком.");
        arr.push((QString)"даже не пытайтесь быть приветливой и милой в отношениях с людьми. Вам неважно, как вас воспринимают, вы редко улыбаетесь людям, считаете кокетство неестественным и предпочитаете, чтобы вас считали человеком прямым, суровым и холодным.");
    }




     if(sum>=21&&sum<=24)
     {
         //QMessageBox::information(this,"Результат","В вас бездна обаяния, но не слишком ли часто вы пользуетесь им для своих целей? Вам обычно прощают недостатки; вы ведь такая милая и не скупитесь на приятные слова, даже если они не соответствуют действительности: иногда чтобы сделать приятное, а иногда о более практической целью. Кое-кто упрекает вас в неестественности — и это, пожалуй, справедливо.");
        //for_each(iterStart,iterEnd,display(&arr));
         QMessageBox::information(this,"Результат",arr.front());

     }
     else if(sum>=13&&sum<=20)
     {
         arr.pop();
         QMessageBox::information(this,"Результат",arr.front());
         //QMessageBox::information(this,"Результат","Вы одарены обаянием и умеете пользоваться этим даром, чтобы сделать повседневность более приятной. Симпатии окружающих доставляют вам удовольствие, да и вам симпатичны все и каждый. Никто не считает, что вы ведете себя неестественно, никто не может вас упрекнуть в том, что вы перед кем-то заискиваете.");
     }
     else if(sum>=5&&sum<=12)
     {
         arr.pop();
         arr.pop();
         QMessageBox::information(this,"Результат",arr.front());
         //QMessageBox::information(this,"Результат","Ваше обаяние связано с искренностью и непосредственностью, и именно эти черты симпатичны окружающим. Однако бывает, что это кого-то обижает. Вы пытаетесь быть со всеми милой и, хотя иногда взрываетесь, стараетесь остаться воспитанным человеком.");
     }
     else if(sum>=0&&sum<=4)
     {
         arr.pop();
         arr.pop();
         arr.pop();
         QMessageBox::information(this,"Результат",arr.front());
         //QMessageBox::information(this,"Результат","даже не пытайтесь быть приветливой и милой в отношениях с людьми. Вам неважно, как вас воспринимают, вы редко улыбаетесь людям, считаете кокетство неестественным и предпочитаете, чтобы вас считали человеком прямым, суровым и холодным.");
     }
     mFile1.flush();
     mFile2.flush();
     mFile3.flush();
     mFile4.flush();
     mFile5.flush();
     mFile6.flush();

     mFile1.close();
     mFile2.close();
     mFile3.close();
     mFile4.close();
     mFile5.close();
     mFile6.close();

}

void Result_for_Test2::on_resultButton_clicked()
{
    readFiles_Test2();
}
