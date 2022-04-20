#ifndef TESTIO_H
#define TESTIO_H

#include <QWidget>
#include <QDebug>

namespace Ui {
class testIO;
}

class testIO : public QWidget
{
    Q_OBJECT

public:
    explicit testIO(QWidget *parent = nullptr);
    ~testIO();

private slots:
    void on_pushButton_clicked();

private:
    Ui::testIO *ui;
};

#endif // TESTIO_H
