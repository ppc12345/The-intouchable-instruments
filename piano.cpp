#include "piano.h"


Piano::Piano(){}

void Piano::pout(int* a) {
    for (int i = 0; i < 7; i++) {
        cout << *(a + i) << " ";
        if(*a==1){
			cout<<"button press";
		}
    }
    cout << endl;
   
   //system("play /home/pi/code/src/audio/A5.wav");
    
    //code
}
