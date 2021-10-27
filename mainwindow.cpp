#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<iostream>

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



void MainWindow::on__solveButton_clicked()
{
    QLineEdit *gridView[] = {
        ui->_grid00,
        ui->_grid01,
        ui->_grid02,
        ui->_grid03,
        ui->_grid04,
        ui->_grid05,
        ui->_grid06,
        ui->_grid07,
        ui->_grid08,
        ui->_grid10,
        ui->_grid11,
        ui->_grid12,
        ui->_grid13,
        ui->_grid14,
        ui->_grid15,
        ui->_grid16,
        ui->_grid17,
        ui->_grid18,
        ui->_grid20,
        ui->_grid21,
        ui->_grid22,
        ui->_grid23,
        ui->_grid24,
        ui->_grid25,
        ui->_grid26,
        ui->_grid27,
        ui->_grid28,
        ui->_grid30,
        ui->_grid31,
        ui->_grid32,
        ui->_grid33,
        ui->_grid34,
        ui->_grid35,
        ui->_grid36,
        ui->_grid37,
        ui->_grid38,
        ui->_grid40,
        ui->_grid41,
        ui->_grid42,
        ui->_grid43,
        ui->_grid44,
        ui->_grid45,
        ui->_grid46,
        ui->_grid47,
        ui->_grid48,
        ui->_grid50,
        ui->_grid51,
        ui->_grid52,
        ui->_grid53,
        ui->_grid54,
        ui->_grid55,
        ui->_grid56,
        ui->_grid57,
        ui->_grid58,
        ui->_grid60,
        ui->_grid61,
        ui->_grid62,
        ui->_grid63,
        ui->_grid64,
        ui->_grid65,
        ui->_grid66,
        ui->_grid67,
        ui->_grid68,
        ui->_grid70,
        ui->_grid71,
        ui->_grid72,
        ui->_grid73,
        ui->_grid74,
        ui->_grid75,
        ui->_grid76,
        ui->_grid77,
        ui->_grid78,
        ui->_grid80,
        ui->_grid81,
        ui->_grid82,
        ui->_grid83,
        ui->_grid84,
        ui->_grid85,
        ui->_grid86,
        ui->_grid87,
        ui->_grid88,
    };


    int i, j;
    int grid[9][9];

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            grid[i][j] = gridView[(i*9)+j]->text().toInt();
        }
    }

    std::cout << std::endl;
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // SOLVE SUDOKU HERE (include unsolvable case)

    ui->_displayLabel->setText("Sudoku Solved!");
    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            gridView[(i*9)+j]->setText(QString::number(grid[i][j]));
        }
    }
}

void MainWindow::on__clearButton_clicked()
{
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }
    ui->_displayLabel->setText("Enter Sudoku Puzzle");
}

