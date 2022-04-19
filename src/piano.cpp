#include "piano.h"

Piano::Piano(){}

void Piano::pout(int* a) {
    for (int i = 0; i < 7; i++) {
        cout << *(a + i) << " ";  //output keyboard message
    }
    cout << endl;
    if(*a==1){
        system("play /home/pi/finalcode/audio/6A.wav");
    }else if(*(a+1)==1){
        system("play /home/pi/finalcode/audio/6B.wav");
    }else if(*(a+2)==1){
        system("play /home/pi/finalcode/audio/6C.wav");
    }else if(*(a+3)==1){
        system("play /home/pi/finalcode/audio/6D.wav");
    }else if(*(a+4)==1){
        system("play /home/pi/finalcode/audio/6E.wav");
    }else if(*(a+5)==1){
        system("play /home/pi/finalcode/audio/6F.wav");
    }else if(*(a+6)==1){
        system("play /home/pi/finalcode/audio/6G.wav");
    }
    
}
