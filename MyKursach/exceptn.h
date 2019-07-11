#ifndef EXCEPTN_H
#define EXCEPTN_H

#include <QMainWindow>


namespace Ui {
class Exceptn;
}

class Exceptn : public QMainWindow
{
    Q_OBJECT
protected:
    QString exName;
    int sizeName;

public:
    explicit Exceptn(QWidget *parent = 0);
    Exceptn() {
            this->exName = "undefined exception";
            this->sizeName = exName.size();
        }
    Exceptn(QString exceptionName) {
            this->sizeName = exceptionName.size();
            this->exName = exceptionName;
        }
    ~Exceptn();

private:
    Ui::Exceptn *ui;
};

#endif // EXCEPTN_H

