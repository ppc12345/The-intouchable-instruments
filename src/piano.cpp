#include "piano.h"

Piano::Piano(){}

void Piano::pout(int* a) {
    for (int i = 0; i < 7; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;
    if(*a==1){
        system("play /home/pi/finalcode/audio/4A.wav");
    }else if(*(a+1)==1){
        system("play /home/pi/finalcode/audio/4B.wav");
    }else if(*(a+2)==1){
        system("play /home/pi/finalcode/audio/4C.wav");
    }else if(*(a+3)==1){
        system("play /home/pi/finalcode/audio/4D.wav");
    }else if(*(a+4)==1){
        system("play /home/pi/finalcode/audio/4E.wav");
    }else if(*(a+5)==1){
        system("play /home/pi/finalcode/audio/4F.wav");
    }else if(*(a+6)==1){
        system("play /home/pi/finalcode/audio/4G.wav");
    }
    
    //code
}
