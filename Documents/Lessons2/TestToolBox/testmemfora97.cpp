#include "testmemfora97.h"
#include "ui_testmemfora97.h"
#include <QDebug>

TestMemFORA97::TestMemFORA97(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestMemFORA97)
{
    ui->setupUi(this);
    qDebug() << "Конструктор testMem A97";
}

TestMemFORA97::~TestMemFORA97()
{
    delete ui;
    qDebug() << "Деструктор testMem A97";
}

void TestMemFORA97::on_pushButton_clicked()
{

}
