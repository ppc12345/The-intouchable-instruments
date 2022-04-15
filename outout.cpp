#include "outout.h"

MyClass::MyClass(){}

void MyClass::printnum(int* a) {
    for (int i = 0; i < 7; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;
}