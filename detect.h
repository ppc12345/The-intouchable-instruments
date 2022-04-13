#ifndef DETECT_H
#define DETECT_H


#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

class Detect
{
public:
    Detect();
    int getTime();
	void setup();

private:
    int R, G, B;
    int t = 0;
    int aver[7] = { 0 };
    int aveg[7] = { 0 };
    int aveb[7] = { 0 };
    float lasttime = 0;
    float now = 0;
    int output[7] = { 0 };
    VideoCapture video;
    Mat img;
    Mat rgb;
};


#endif // !DETECT_H

