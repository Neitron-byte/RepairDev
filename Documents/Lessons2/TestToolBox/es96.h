#ifndef ES96_H
#define ES96_H

#include <QObject>
#include "device.h"
#include "testmem.h"
#include <QDebug>
#include "ui_device.h"

class ES96 : public Device
{
    Q_OBJECT
public:
    explicit ES96(QWidget *parent = nullptr);
    void inits() override;
    void addWidgetTestMem(int ) override;
    void addWidgetTestIO(int ) override;
private:
    //количество Item в ToolBox
    const uint m_countItem = 11;

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
        "Проверка IO"
    };

};

#endif // ES96_H
