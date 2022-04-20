#ifndef TESTIO_A97_H
#define TESTIO_A97_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class TEstIO_A97;
}

class TEstIO_A97 : public QWidget
{
    Q_OBJECT

public:
    explicit TEstIO_A97(QWidget *parent = nullptr);
    ~TEstIO_A97();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TEstIO_A97 *ui;
};

#endif // TESTIO_A97_H
