#include "a97.h"
#include "testmemfora97.h"
#include "testio_a97.h"

A97::A97(QWidget *parent) :  Device(parent)
{


}

void A97::inits()
{
    qDebug() << "Inits A97";
    for (uint var = 0; var < m_countItem; ++var) {
       m_ui->toolBox_dev->setItemText(var,m_nameItem[var]);
       qDebug() << var;
    }
    m_ui->toolBox_dev->setCurrentIndex(0);
}

void A97::addWidgetTestMem(int ind)
{
    TestMemFORA97* testmem = new TestMemFORA97(this);
    m_ui->toolBox_dev->insertItem(ind,testmem,"Тестирование памяти");
}

void A97::addWidgetTestIO(int ind)
{
    TEstIO_A97* testio = new TEstIO_A97(this);
    m_ui->toolBox_dev->insertItem(ind,testio,"Тестирование входов/выходов");
}
