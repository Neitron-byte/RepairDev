#ifndef TESTMEM_H
#define TESTMEM_H

#include <QWidget>

namespace Ui {
class TestMem;
}

class TestMem : public QWidget
{
    Q_OBJECT

public:
    explicit TestMem(QWidget *parent = nullptr);
    ~TestMem();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TestMem *ui;
};

#endif // TESTMEM_H
