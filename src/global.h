#ifndef GLOBAL_H
#define GLOBAL_H

#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/imgcodecs.hpp"
#include <mutex>

using namespace cv;
using namespace std;

extern Mat fbuffer;  //buffer to store data
extern mutex mtx;
//extern int flag;

#endif // !GLOBAL_H
