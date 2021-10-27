#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
#include <QTableView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_solveButton_clicked()
{
    int i, j;
    int grid[9][9];
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            grid[i][j] = 0;
        }
    }
//    qint64 data = ui->_grid->item(8, 8)->text().toInt();
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            grid[i][j] = ui->_grid->item(i, j)->text().toInt();
        }
    }
    std::cout<< grid[8][8];
//    std::cout << std::endl;
//    for(i = 0; i < 9; i++)
//    {
//        for(j = 0; j < 9; j++)
//        {
//            std::cout << grid[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
}
