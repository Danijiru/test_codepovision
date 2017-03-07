#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/opencv.hpp>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cv::Mat inputImage = cv::imread("/home/daniel/Images/Wallpapers/27239.jpg");
    cv::imshow("Display Image", inputImage);
}

MainWindow::~MainWindow()
{
    delete ui;
}
