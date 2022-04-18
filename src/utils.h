#ifndef UTILS_H_
#define UTILS_H_

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <QImage>

namespace futils{
    QImage cvmat_to_qimage(const cv::Mat& mat);

}


#endif
