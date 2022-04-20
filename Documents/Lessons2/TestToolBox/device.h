#ifndef DEVICE_H
#define DEVICE_H

#include <QWidget>
#include <QDebug>


namespace Ui {
class Device;
}

class Device : public QWidget
{
    Q_OBJECT


public:
    explicit Device(QWidget *parent = nullptr);
    ~Device();
    virtual void inits() = 0;
    virtual void addWidgetTestMem(int ) = 0;
    virtual void addWidgetTestIO(int ) = 0;
    virtual void addWidgetTemp(int );

protected:
    Ui::Device *m_ui;

    uint m_prevcurrentIndexTool;

private slots:
    void on_toolBox_dev_currentChanged(int index);
};

#endif // DEVICE_H
