#ifndef UTILS_H_
#DEFINE UTILS_H_
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <QImage>

namespace utils{
    Image image=cvmat_toqimage(const cv::Mat& mat);

}

#endif