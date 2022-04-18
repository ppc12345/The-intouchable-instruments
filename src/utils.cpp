#include "utils.h"


namespace futils
{
    QImage cvmat_to_qimage(const cv::Mat& mat)
    {
         QImage image(mat.data, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
         return image;
    }
}
