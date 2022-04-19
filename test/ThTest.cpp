#define BOOST_TEST_MODULE ThreadTests
#include <boost/test/unit_test.hpp>

#include "CppThread.h"
#include <stdio.h>
#include <chrono>
#include <thread>

int result[2];
int* ad = result;

class DemoThread : public CppThread {

public:
	DemoThread(int _num, int _t) {
		num = _num;
		t= _t;
	}

private:
	void run();

private:
	int num;
	int t;
};


void DemoThread::run() {
	std::this_thread::sleep_for(std::chrono::milliseconds(t));
	*ad = num;
	ad += 1;
}

BOOST_AUTO_TEST_CASE(PassTest)
{
    DemoThread thread01(70,30);
    DemoThread thread02(50,10);
    thread01.start();
    thread02.start();
    thread01.join();
    thread02.join();

    BOOST_CHECK_EQUAL(50,result[0]);
}
