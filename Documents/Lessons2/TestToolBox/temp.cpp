#include "temp.h"
#include "ui_temp.h"
#include "QDebug"

temp::temp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::temp)
{
    ui->setupUi(this);
    qDebug() << "Temp конструктор";
}

temp::~temp()
{
    qDebug() << "Temp деструктор";
    delete ui;
}
