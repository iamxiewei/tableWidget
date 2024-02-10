#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    //Ôö¼Ó×¢ÊÍ
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_ImportData_clicked()
{

}


void MainWindow::on_pushButton_AddData_clicked()
{

}


void MainWindow::on_pushButton_deleteData_clicked()
{

}


void MainWindow::on_pushButton_updateData_clicked()
{

}


void MainWindow::on_pushButton_selectData_clicked()
{

}


void MainWindow::on_pushButton_clicked()
{

}

