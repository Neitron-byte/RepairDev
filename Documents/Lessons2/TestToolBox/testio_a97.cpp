#include "testio_a97.h"
#include "ui_testio_a97.h"

TEstIO_A97::TEstIO_A97(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TEstIO_A97)
{
    ui->setupUi(this);
    qDebug() << "Конструктор testIO A97";
}

TEstIO_A97::~TEstIO_A97()
{
    delete ui;
    qDebug() << "Деструктор testIO A97";
}

void TEstIO_A97::on_pushButton_clicked()
{
    qDebug() << "Кнопка на виджете A97";
}
