#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include <QPainter>
#include <QFileDialog>
#include <qlabel.h>
#include <QSpacerItem>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Detect");
    setPalette(QPalette(Qt::gray));


    //QLabel *label_video=new QLabel(this);
    ui->label_video->setStyleSheet("QLabel {background-color:rgba(150,150,140,0.4);border-width: 1px;border-style: solid;border-color:red;}");

    //QLabel *label_2=new QLabel(label_2);
    ui->label_2->setStyleSheet("QLabel {width:300;}");
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

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(NULL, "Title Detect", "Make sure stop？"
                                , QMessageBox::Yes | QMessageBox::No
                                , QMessageBox::Yes);
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter p;
    p.begin(this);
    p.drawPixmap(0,0, width(),height(),QPixmap("../images/bg.jpg"));
    p.end();
}

//void MainWindow::on_pushButton_clicked()
//{
//    QString img_name=QFileDialog::getOpenFileName(this, tr("open image"), ".", tr("Image Files(*.jpg *.png *.jpeg)"));
//    Mat src=
//}
