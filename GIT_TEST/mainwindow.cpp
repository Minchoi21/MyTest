#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_btnChange_clicked()
{
    static bool state = false;
    if(state == false) {
        ui->lblShow->setText("Changed Text!");
        state = true;
    }
    else {
        ui->lblShow->setText("Return Text!");
        state = false;
    }

}
