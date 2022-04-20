#include "testio.h"
#include "ui_testio.h"

testIO::testIO(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::testIO)
{
    ui->setupUi(this);
    qDebug() << "Конструктор testIO ES96";
}

testIO::~testIO()
{
    delete ui;
    qDebug() << "Деструктор testIO ES96";
}

void testIO::on_pushButton_clicked()
{
    qDebug() << "Кнопка на виджете ES96";
}
