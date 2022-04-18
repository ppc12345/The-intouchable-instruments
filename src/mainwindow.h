#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <QMainWindow>
#include <qtimer.h>
#include "global.h"
#include "utils.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    
    

private slots:
    void on_pushButton_2_clicked();
    

    void on_pushButton_clicked();
    
    

protected:
    void paintEvent(QPaintEvent *);

public slots:
    void ontryrefreshtimer();
    //void video_update();


private:
    Ui::MainWindow *ui;
    cv::Mat frame;
    cv::VideoCapture vid;
    QTimer *refresh_timer;
};
#endif // MAINWINDOW_H
