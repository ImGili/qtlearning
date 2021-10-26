#include"testwindow.h"
#include "ui_testwindow.h"
#include <iostream>

testWindow::testWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

testWindow::~testWindow()
{
    delete ui;
}
