#include <iostream>
#include "MyThread.h"
#include "mainwindow.h"
#include <QApplication>


using namespace cv;
using namespace std;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    MyThread mt;
    mt.start();
    a.exec();
    
    return 0;
}
