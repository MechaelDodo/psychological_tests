#include "result_for_test1.h"
#include "ui_result_for_test1.h"
#include "test_1q7.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>
#include "exceptninput.h"
#include <exception>
#include <iostream>
#include <conio.h>
#include<queue>
using namespace std;
Result_for_Test1::Result_for_Test1(QWidget *parent) :
    Test_1q7(parent),
    ui(new Ui::Result_for_Test1)
{
    ui->setupUi(this);
    connect(ui->closeButton_for_Begin,SIGNAL(clicked()),this,SLOT(close()));
}
Result_for_Test1::~Result_for_Test1()
{
    delete ui;
}
void Result_for_Test1::on_backButton_for_q10_clicked()
{
    Test_1q7 *wnd=new Test_1q7;
    wnd->show();
    Result_for_Test1::close();
}

void Result_for_Test1::on_WindowButton_clicked()
{
    MainWindow *wnd=new MainWindow;
    wnd->show();
    Result_for_Test1::close();
}

void Result_for_Test1::readFiles_Test1()
{
    ExceptnInput *e = new ExceptnInput;
    bool i = 0;

    QFile mFile1(".\\test_1_q1.bin");
    QFile mFile2(".\\test_1_q2.bin");
    QFile mFile3(".\\test_1_qu3.bin");
    QFile mFile4(".\\test_1_q4.bin");
    QFile mFile5(".\\test_1_q5.bin");
    QFile mFile6(".\\test_1_q6.bin");
    QFile mFile7(".\\test_1_q7.bin");
    do {

            i = 0;
            try {
                e->ExResult1();

            }
            catch (char*str)
            {

                i = 1;
                cout << str << endl;
                _getch();
            }

            } while (i);
     QString MyBuffer;
     int sum=e->ExResult1();
     ui->resultButton->setText( MyBuffer.number(sum));
     queue<QString> arr;
     if(arr.empty())
     {
         arr.push((QString)"вы достаточно уверены в себе, но вам, естественно, не чужды ситуации, в которых вы чувствуете себя неуверенно. Однако вы можете в этом признаться, потому что вы сильная личность. Вам не нужно прикладывать больших усилий, обычно вы и так добиваетесь, чего хотите.");
         arr.push((QString)"ваша уверенность в себе несколько неустойчива. Если вас поддерживает многолетний опыт, можете считать, что все в порядке. Но незнакомые люди, новые задачи раздражают вас больше, чем это объективно необходимо. В таких случаях вы легко теряете уверенность в своих силах. Тогда в зависимости от настроения вы либо замыкаетесь в себе, либо бываете излишне самоуверенны.");
         arr.push((QString)"вам явно не хватает положительной самооценки. Вероятно, вы не привыкли доверять окружающим. Вы мучаете себя упреками и воспоминаниями, лишая себя при этом радости жизни. Постарайтесь найти время, чтобы проанализировать причину неуверенности в себе. Если у вас не получится, обратитесь за помощью к психологу.");
     }
     if(sum>=10&&sum<=14)
     {
         QMessageBox::information(this,"Результат",arr.front());
     }
     else if(sum>=5&&sum<=10)
     {
         arr.pop();
         QMessageBox::information(this,"Результат",arr.front());
     }
     else if(sum>=0&&sum<=4)
     {
         arr.pop();
         arr.pop();
         QMessageBox::information(this,"Результат",arr.front());
     }
     mFile1.flush();
     mFile2.flush();
     mFile3.flush();
     mFile4.flush();
     mFile5.flush();
     mFile6.flush();
     mFile7.flush();
     mFile1.close();
     mFile2.close();
     mFile3.close();
     mFile4.close();
     mFile5.close();
     mFile6.close();
     mFile7.close();

}
void Result_for_Test1::on_resultButton_clicked()
{
    readFiles_Test1();
}
