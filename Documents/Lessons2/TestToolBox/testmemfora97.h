#ifndef TESTMEMFORA97_H
#define TESTMEMFORA97_H

#include <QWidget>

namespace Ui {
class TestMemFORA97;
}

class TestMemFORA97 : public QWidget
{
    Q_OBJECT

public:
    explicit TestMemFORA97(QWidget *parent = nullptr);
    ~TestMemFORA97();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TestMemFORA97 *ui;
};

#endif // TESTMEMFORA97_H
