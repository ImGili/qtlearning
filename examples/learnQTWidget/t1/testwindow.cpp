#include"testwindow.h"
#include "ui_testwindow.h"

#include<opencv2/core.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
using namespace cv;
#include <iostream>

testWindow::testWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::pressed, this, &testWindow::on_push_button_clicked);
    std::string image_path = samples::findFile("/Users/gulei/Desktop/learnsomething/opencv_learning/resources/imgs/lena.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read image :" << image_path << std::endl;
        return ;
    }
    // imshow("Display image", img);
    QImage qimg(img.data, img.cols, img.rows, QImage::Format::Format_BGR888);
    ui->label->setPixmap(QPixmap::fromImage(qimg));
    // int k = waitKey(0);
}

testWindow::~testWindow()
{
    delete ui;
}

void testWindow::on_push_button_clicked()
{
    static bool isLabelvisible = true;
    std::cout << "button clicked" << std::endl;
    isLabelvisible = !isLabelvisible;

    ui->label->setVisible(isLabelvisible);
}
