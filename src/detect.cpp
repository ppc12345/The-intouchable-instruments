#include "detect.h"

Detect::Detect() {}

void Detect::setup() {
    cout << "Built with OpenCV " << CV_VERSION << endl;
    Scalar lower(hmin, smin, vmin);//HSV lower range
    Scalar upper(hmax, smax, vmax);//HSV higher range
    for(;;)
    {
        mtx.lock();
        img = fbuffer; 
        mtx.unlock();
        if(img.empty())
            continue;
        //cvtColor(img, rgb, COLOR_BGR2RGB);
        cvtColor(img, hsv, COLOR_BGR2HSV);
        inRange(hsv, lower, upper, hsv_mask);//input, lower, higher, output
        //inRange is to set pixel values within the threshold range to white (255) and those not within the threshold range to black (0)
        //GaussianBlur(rgb1, rgb, Size(3, 3), 3, 0);
        for (int n = 0; n < 7; n++) {
            for (int i = 100; i <= 200; i++)
            {
                for (int j = 10 + n * 90; j <= 90 + n * 90; j++)
                {
                    P = hsv_mask.at<uchar>(i, j);
                        if (P > 221)
                        w[n]+=1;
                }
            }
            if  (w[n] > 2000){   //threshhold
                out[n]=1;
                //rectangle(img, Rect(10+n*90, 100, 80, 100), Scalar(0, 0, 255), 2, 8); 
            }
        }
        now = clock();
        if ((double)(now - last) / CLOCKS_PER_SEC > 0.2)
        {
            piano.pout(out);
            last = now;
        }
        //cvtColor(rgb, img, COLOR_RGB2BGR);
        //imshow("image", hsv_mask);
        //imshow("Image",img);

        memset(out, 0, 7 * sizeof(out[0]));
        memset(w, 0, 7 * sizeof(w[0]));


    }
}
