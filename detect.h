#ifndef DETECT_H
#define DETECT_H


#include "opencv2/opencv.hpp"
#include "outout.h"

using namespace cv;
using namespace std;

class Detect
{
public:
    Detect();
    void setup();

private:
    int R, G, B;
    int t = 0;
    int aver[7] = { 0 };
    int aveg[7] = { 0 };
    int aveb[7] = { 0 };
    clock_t now = 0;
    clock_t last = 0;
    int output[7] = { 0 };
    VideoCapture video;
    Mat img;
    Mat rgb;
};


#endif // !DETECT_H

