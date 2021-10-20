#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::pressed, this, &MainWindow::on_push_button_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_push_button_clicked()
{
    std::cout << "button clicked" << std::endl;
}