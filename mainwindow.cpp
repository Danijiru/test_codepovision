#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/opencv.hpp>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);::c
    cv::Mat inputImage = cv::imread("/home/sam/Images/emily.jpg");
    cv::imshow("Display Image", inputImage);
    std::cou << "bonjour on choux";
}

MainWindow::~MainWindow()
{
    delete ui;
}
