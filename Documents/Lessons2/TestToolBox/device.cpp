#include "device.h"
#include "ui_device.h"
#include "temp.h"

Device::Device(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::Device),
    m_prevcurrentIndexTool(0)
{
    m_ui->setupUi(this);
    //m_ui->toolBox_dev->setCurrentIndex(0);
    //qDebug() << m_ui->toolBox_dev->count();
    qDebug() << "Конструктор Device";
    //m_ui->toolBox_dev->removeItem(0);
    qDebug() << "Предыдущий индекс " << m_prevcurrentIndexTool;
}

Device::~Device()
{
    delete m_ui;
    qDebug() << "Деструктор Device";
}

void Device::addWidgetTemp(int ind)
{
    temp* itemp = new temp(this);
    m_ui->toolBox_dev->insertItem(ind,itemp," ");
}

void Device::on_toolBox_dev_currentChanged(int index)
{
    qDebug() << "Индекс " << index;

    QWidget* widget = m_ui->toolBox_dev->widget(m_prevcurrentIndexTool);
    if (widget != nullptr){
        qDebug() << "Удаление виджета c предыдущим индексом " << m_prevcurrentIndexTool;
        delete widget;
    }
    m_prevcurrentIndexTool = index;
    if (index == 0){
        this->addWidgetTemp(index);
    }
    if (index == 1){
        this->addWidgetTestMem(index);
    }
    if (index == 2) {
        this->addWidgetTestIO(index);
    }


}
