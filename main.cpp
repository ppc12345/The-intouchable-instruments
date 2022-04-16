#include <iostream>
#include "MyThread.h"


using namespace cv;
using namespace std;

int main() {
    MyThread mt;
    MyThread2 mt2;
    mt.start();
    mt2.start();
    mt.join();
    mt2.join();
}
