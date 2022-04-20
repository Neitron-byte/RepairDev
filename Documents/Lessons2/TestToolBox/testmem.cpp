#include "testmem.h"
#include "ui_testmem.h"
#include <QDebug>

TestMem::TestMem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestMem)
{
    ui->setupUi(this);
    qDebug() << "Конструктор testMem ES96";
}

TestMem::~TestMem()
{
    qDebug() << "Деструктор testMem ES96";
    delete ui;

}

void TestMem::on_pushButton_clicked()
{

}
