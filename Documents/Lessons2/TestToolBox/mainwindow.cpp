#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBoxCom->addItem(" ");
    ui->comboBoxCom->addItem("ES96");
    ui->comboBoxCom->addItem("A97");
}

MainWindow::~MainWindow()
{
    delete ui;
    if (m_tool){
        delete m_tool;
    }
}


void MainWindow::on_comboBoxCom_currentIndexChanged(int index)
{
    if (index != 0){
        if (m_tool != nullptr){
            delete m_tool;
        }
        if (index == 1) {
            m_tool = new ES96(this);

        } else if (index == 2){
            m_tool = new A97(this);

        }
        m_tool->inits();
        ui->verticalLayoutForToolBox->addWidget(m_tool);
    }

}
