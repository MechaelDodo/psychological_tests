#include "exceptn.h"
#include "ui_exceptn.h"

Exceptn::Exceptn(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Exceptn)
{
    ui->setupUi(this);
}

Exceptn::~Exceptn()
{
    delete ui;
}

