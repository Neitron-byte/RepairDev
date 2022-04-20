#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "device.h"
#include "es96.h"
#include "a97.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_comboBoxCom_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    Device* m_tool = nullptr;
};
#endif // MAINWINDOW_H
