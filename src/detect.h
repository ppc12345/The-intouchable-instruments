#ifndef DETECT_H
#define DETECT_H

#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/imgcodecs.hpp"
#include <ctime>
#include <iostream>
#include "piano.h"
#include "global.h"

using namespace cv;
using namespace std;



class Detect
{
public:
    Detect();
	void setup();
    

private:
    //int H, S, V;
    int P;
    int hmin = 0, smin = 30, vmin = 60;
    int hmax =20, smax = 150, vmax = 255;
    int t = 0;
    //int aver[7] = { 0 };
    //int aveg[7] = { 0 };
    //int aveb[7] = { 0 };
    //int b[7] = {0};
    int w[7] = {0};
    int out[7] = {0};
    clock_t now = 0;
    clock_t last = 0;
    //Mat raw;
    Mat img;
    Mat hsv;
    Mat hsv_mask;
    //VideoCapture capture;
    Piano piano;
    //MainWindow *window;
    
};


#endif // !DETECT_H

