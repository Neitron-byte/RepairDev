#ifndef A97_H
#define A97_H

#include <QObject>
#include "device.h"
#include <QDebug>
#include "ui_device.h"
#include <QVector.h>

class A97 : public Device
{
    Q_OBJECT
public:
    explicit A97(QWidget *parent = nullptr);
    void inits() override;
    void addWidgetTestMem(int ) override;
    void addWidgetTestIO(int ) override;
private:
    //количество Item в ToolBox
    const uint m_countItem = 12;

    QVector<QString> m_nameItem {
        "Тестирование MEM",
        "Тестирование LIN",
        "Тестирование CAN",
        "Проверка PWR",
        "Тестирование GSM",
        "Тестирование GPS",
        "Тестирование ACC",
        "Тестирование BLE",
        "Тестирование MIC",
        "Проверка температуры",
        "Проверка IO",
        "Проверка TRX"

    };

};

#endif // A97_H
