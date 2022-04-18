#include "utils.h"

namespace utils
{
    QImage cvmat_qimage(const cv::Mat& mat);
    {
        QImage image(mat, data, mat.cols,mat.rows,mat.step,QImage::Format_RGB888);
        return image;
    }
}