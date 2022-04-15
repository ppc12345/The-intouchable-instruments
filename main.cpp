#include <iostream>
#include "MyThread.h"
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;



int main(int argc, char* argv[]) {
    MyThread mt;
    mt.start();     
    mt.join();
}