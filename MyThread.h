#ifndef MY_THREAD_H
#define MY_THREAD_H

#include "CppThread.h"
#include "detect.h"


class MyThread : public CppThread {

public:
	MyThread();

private:
	void run();

};



#endif // !MY_THREAD_H
