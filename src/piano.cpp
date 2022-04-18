#include "piano.h"

Piano::Piano(){}

void Piano::pout(int* a) {
    for (int i = 0; i < 7; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;
    if(*a==1){
        system("play /home/pi/finalcode/audio/1.wav");
    }else if(*(a+1)==1){
        system("play /home/pi/finalcode/audio/2.wav");
    }else if(*(a+2)==1){
        system("play /home/pi/finalcode/audio/3.wav");
    }else if(*(a+3)==1){
        system("play /home/pi/finalcode/audio/4.wav");
    }else if(*(a+4)==1){
        system("play /home/pi/finalcode/audio/5.wav");
    }else if(*(a+5)==1){
        system("play /home/pi/finalcode/audio/6.wav");
    }else if(*(a+6)==1){
        system("play /home/pi/finalcode/audio/7.wav");
    }
    
    //code
}
