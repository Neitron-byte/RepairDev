#include "es96.h"
#include "testmem.h"
#include "testio.h"

ES96::ES96(QWidget *parent) : Device (parent)
{

}

void ES96::inits()
{

    qDebug() << "Inits ES96";
    for (uint var = 0; var < m_nameItem.size(); ++var) {
       m_ui->toolBox_dev->setItemText(var,m_nameItem[var]);
    }

    m_ui->toolBox_dev->setItemEnabled(m_countItem,false);
    m_ui->toolBox_dev->setCurrentIndex(0);

    //m_ui->toolBox_dev->setCurrentIndex(0);
}

void ES96::addWidgetTestMem(int ind)
{
    TestMem* testmem = new TestMem(this);
    m_ui->toolBox_dev->insertItem(ind,testmem,"Тестирование памяти");

}

void ES96::addWidgetTestIO(int ind)
{
    testIO* testio = new testIO(this);
    m_ui->toolBox_dev->insertItem(ind,testio,"Тестирование входов/выходов");
}
