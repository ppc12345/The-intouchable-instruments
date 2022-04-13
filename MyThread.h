#ifndef MY_THREAD_H
#define MY_THREAD_H

#include "CppThread.h"
#include "detect.h"


class MyThread : public CppThread {

public:
	MyThread() {
		detect = new Detect();
	};

private:
	void run();
	Detect *detect;
};



#endif // !MY_THREAD_H
