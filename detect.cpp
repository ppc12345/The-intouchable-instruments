#include "detect.h"

int Detect::getTime() {
    return clock() / CLOCKS_PER_SEC;
}

void Detect::setup() {
    video.open(0);
    if (!video.isOpened()) {
        cerr << "fail to open camera" << endl;
    }
    while (true) {
        video >> img;
        cvtColor(img, rgb, COLOR_BGR2RGB);
        for (int n = 0; n < 7; n++) {
            for (int i = 300; i <= 400; i++)
            {
                for (int j = 10 + n * 90; j <= 90 + n * 90; j++)
                {
                    R = rgb.at<Vec3b>(i, j)[0];
                    G = rgb.at<Vec3b>(i, j)[1];
                    B = rgb.at<Vec3b>(i, j)[2];
                    aver[n] += R;
                    aveg[n] += G;
                    aveb[n] += B;

                }
            }
            aver[n] = aver[n] / (100 * 80);
            aveg[n] = aveg[n] / (100 * 80);
            aveb[n] = aveb[n] / (100 * 80);
        }
        now = getTime();
        if ((now - lasttime) > 0.5)
        {
            /**for (int z = 0; z < 7; z++) {
                if (aver[z] < 50) {
                    output[z] = 1;
                }
                cout << output[z] << " ";
            }
            cout << endl; **/
            cout << aver[0] << "," << aveg[0] << "," << aveb[0] << endl;
            lasttime = now;
        }
        cvtColor(rgb, img, COLOR_RGB2BGR);
        rectangle(img, Rect(10, 300, 80, 100), Scalar(0, 255, 0), 2, 8);
        rectangle(img, Rect(100, 300, 80, 100), Scalar(0, 255, 0), 2, 8);
        rectangle(img, Rect(190, 300, 80, 100), Scalar(0, 255, 0), 2, 8);
        rectangle(img, Rect(280, 300, 80, 100), Scalar(0, 255, 0), 2, 8);
        rectangle(img, Rect(370, 300, 80, 100), Scalar(0, 255, 0), 2, 8);
        rectangle(img, Rect(460, 300, 80, 100), Scalar(0, 255, 0), 2, 8);
        rectangle(img, Rect(550, 300, 80, 100), Scalar(0, 255, 0), 2, 8);
        imshow("image", img);
        memset(output, 0, 7 * sizeof(output[0]));
        if (waitKey(10) == 27)
            break;
    }
}