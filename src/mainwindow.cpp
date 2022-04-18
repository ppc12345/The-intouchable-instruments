#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include <QPainter>
#include <QFileDialog>
#include <qlabel.h>
#include <QSpacerItem>
//#include <detect.cpp>





MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //frame = fra;
    ui->setupUi(this);
    setWindowTitle("The team 19");
    setPalette(QPalette(Qt::gray));


    //QLabel *label_video=new QLabel(this);
    ui->label_video->setStyleSheet("QLabel {background-color:rgba(150,150,140,0.4);border-width: 1px;border-style: solid;height:800px;}");

    //QLabel *label_2=new QLabel(label_2);
    ui->label_2->setStyleSheet("QLabel {width:500;}");
    ui->horizontalSpacer_3->changeSize(320,20);
    

    setStyleSheet(
                     //button common style
                     "QPushButton{"
                     "background-color: #f5f6fa;"
                     "border-color: #2f3640;"
                     "border-radius: 10px;"
                     "border-style: solid;"
                     "border-width: 2px;"
                     "padding: 5px;"
                     "}"


                    /**mouse press down**/
                    "QPushButton::pressed,QPushButton::checked{"
                        "color: #FFFFFF;"
                        "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);"
                    "}"

                     //mouse hover
                     "QPushButton::hover{"
                     "color: pink;"
                     //"background-color: #99ccff;"
                     "border-color: #2f3640;"
                     "}");
    QImage *img3=new QImage;
    img3->load("/home/pi/finalcode/files/logo.GIF");
    QPixmap pix3=QPixmap::fromImage(*img3);
    QPixmap fitpixmap3=pix3.scaled(290,270,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->label->setPixmap(fitpixmap3);

    QImage *img1=new QImage;
    img1->load("/home/pi/finalcode/files/logo.GIF");
    QPixmap pix1=QPixmap::fromImage(*img1);
    QPixmap fitpixmap1=pix1.scaled(290,270,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->label_3->setPixmap(fitpixmap1);


    //QImage *img2=new QImage;
    //img2->load(img);
    //QPixmap pix2=QPixmap::fromImage(*img2);
    //QPixmap fitpixmap1=pix2.scaled(290,270,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    //ui->label_3->setPixmap(fitpixmap2);
    //ui->label_video->setPixmap(img);

//this->vid.open(0);
//cv::Mat frame;
//while(true)
//{
//this->vid >> frame;
//cv::imshow("frame",frame);
//if(cv::waitKey(30)>=0)
//    break;
//}

//this->vid >> frame;
//QImage image = utils::cvmat_to_qimage(frame);
//ui->label_video->setPixmap(QPixmap::fromImage(image));
//}

this->vid.open(0);
this->refresh_timer = new QTimer(this);
connect(this->refresh_timer,SIGNAL(timeout()),this,SLOT(ontryrefreshtimer()));
this->refresh_timer->start(20);

//refresh_timer = new QTimer(this);
//connect(refresh_timer,SIGNAL(timeout()),this,MainWindow::video_update());
//refresh_timer->start(10);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    this->refresh_timer->stop();
    QImage *img6=new QImage;
    img6->load("/home/pi/finalcode/files/logo.GIF");
    QPixmap pix6=QPixmap::fromImage(*img6);
    QPixmap fitpixmap6=pix6.scaled(290,270,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
    ui->label_video->setPixmap(fitpixmap6);
}




void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter p;
    p.begin(this);
    p.drawPixmap(0,0, width(),height(),QPixmap("/home/pi/finalcode/files/background.jpg"));
    p.end();
}



void MainWindow::on_pushButton_clicked()
{
    this->refresh_timer = new QTimer(this);
    connect(this->refresh_timer,SIGNAL(timeout()),this,SLOT(ontryrefreshtimer()));
    this->refresh_timer->start(50);
}

void MainWindow::ontryrefreshtimer()
{
    //cv::Mat frame;
    this->vid >> frame;
    //cv::imshow("frame",frame);
    //cv::waitKey(1);
    mtx.lock();
    fbuffer = frame; 
    mtx.unlock();
    rectangle(frame, Rect(10, 100, 80, 100), Scalar(0, 255, 0), 2, 8);
    rectangle(frame, Rect(100, 100, 80, 100), Scalar(0, 255, 0), 2, 8);
    rectangle(frame, Rect(190, 100, 80, 100), Scalar(0, 255, 0), 2, 8);
    rectangle(frame, Rect(280, 100, 80, 100), Scalar(0, 255, 0), 2, 8);
    rectangle(frame, Rect(370, 100, 80, 100), Scalar(0, 255, 0), 2, 8);
    rectangle(frame, Rect(460, 100, 80, 100), Scalar(0, 255, 0), 2, 8);
    rectangle(frame, Rect(550, 100, 80, 100), Scalar(0, 255, 0), 2, 8); 
    QImage image = futils::cvmat_to_qimage(frame);
    ui->label_video->setPixmap(QPixmap::fromImage(image));
}

/*
void MainWindow::video_update(){
    vid >> frame;
    QImage image = utils::cvmat_to_qimage(frame);
    ui->label_video->setPixmap(QPixmap::fromImage(image));
}*/

