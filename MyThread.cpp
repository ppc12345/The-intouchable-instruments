#include "MyThread.h"

MyThread::MyThread() {}
MyThread2::MyThread2() {}

void MyThread::run() {
	Detect detect;
	detect.setup();
}

void MyThread2::run() {
	while(1){
		now = clock();
	    if ( (double)(now - last) / CLOCKS_PER_SEC > 0.5){
			cout<<"111"<<endl;
			last = now;
		}
	}
}
