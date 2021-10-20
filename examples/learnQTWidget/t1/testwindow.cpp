#include"testwindow.h"
#include "ui_testwindow.h"
#include <iostream>

testWindow::testWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // connect(ui->pushButton, &QPushButton::pressed, this, &MainWindow::on_push_button_clicked);
}

testWindow::~testWindow()
{
    delete ui;
}

void testWindow::on_push_button_clicked()
{
    std::cout << "button clicked" << std::endl;
}
