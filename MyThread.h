#ifndef MY_THREAD_H
#define MY_THREAD_H

#include "CppThread.h"
#include "detect.h"
#include <ctime>


class MyThread : public CppThread {

public:
	MyThread();

private:
	void run();
	
};

class MyThread2 : public CppThread {

public:
	MyThread2();

private:
	void run();
	clock_t now = 0;
    clock_t last = 0;
	
};



#endif // !MY_THREAD_H
