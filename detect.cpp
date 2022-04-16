#include "detect.h"
Detect::Detect() {}

void Detect::setup() {
    capture.open(0);
    cout << "Built with OpenCV " << CV_VERSION << endl;
    if(capture.isOpened())
    {
        cout << "Capture is opened" << endl;
        Scalar lower(hmin, smin, vmin);//HSV lower range
        Scalar upper(hmax, smax, vmax);//HSV higher range
        for(;;)
        {
            capture >> img;
            if(img.empty())
                break;
                //cvtColor(img, rgb, COLOR_BGR2RGB);
                cvtColor(img, hsv, COLOR_BGR2HSV);
		        inRange(hsv, lower, upper, hsv_mask);//input, lower, higher, output
                //inRange is to set pixel values within the threshold range to white (255) and those not within the threshold range to black (0)
                //GaussianBlur(rgb1, rgb, Size(3, 3), 3, 0);
            rectangle(img, Rect(10, 100, 80, 100), Scalar(0, 255, 0), 2, 8);
            rectangle(img, Rect(100, 100, 80, 100), Scalar(0, 255, 0), 2, 8);
            rectangle(img, Rect(190, 100, 80, 100), Scalar(0, 255, 0), 2, 8);
            rectangle(img, Rect(280, 100, 80, 100), Scalar(0, 255, 0), 2, 8);
            rectangle(img, Rect(370, 100, 80, 100), Scalar(0, 255, 0), 2, 8);
            rectangle(img, Rect(460, 100, 80, 100), Scalar(0, 255, 0), 2, 8);
            rectangle(img, Rect(550, 100, 80, 100), Scalar(0, 255, 0), 2, 8);    
            for (int n = 0; n < 7; n++) {
                for (int i = 100; i <= 200; i++)
                {
                    for (int j = 10 + n * 90; j <= 90 + n * 90; j++)
                    {
                        //H = hsv_mask.at<Vec3b>(i, j)[0];
                        //S = hsv_mask.at<Vec3b>(i, j)[1];
                        //V = hsv_mask.at<Vec3b>(i, j)[2];
                        P = hsv_mask.at<uchar>(i, j);
                          if (P > 221)
                            w[n]+=1;
                        //aver[n] += H;
                        //aveg[n] += S;
                        //aveb[n] += V;

                    }
                }
                if  (w[n] > 2000){   //threshhold
                   out[n]=1;
                   rectangle(img, Rect(10+n*90, 100, 80, 100), Scalar(255, 0, 0), 2, 8); 
               }
            }
            now = clock();
            if ((double)(now - last) / CLOCKS_PER_SEC > 0.2)
            {
                /**for (int z = 0; z < 7; z++) {
                    if (aver[z] < 50) {
                        output[z] = 1;
                    }
                    cout << output[z] << " ";
                }
                cout << endl; **/
                piano.pout(out);
                last = now;
            }
            //cvtColor(rgb, img, COLOR_RGB2BGR);
            imshow("image", hsv_mask);
            imshow("Image",img);
            memset(out, 0, 7 * sizeof(out[0]));
            memset(w, 0, 7 * sizeof(w[0]));
            if(waitKey(10) == 27)
                break;
        }
    }
    else
    {
        cout << "No capture" << endl;
        img = Mat::zeros(480, 640, CV_8UC1);
        imshow("Sample", img);
        waitKey(0);
    }
}
