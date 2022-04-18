#include "piano.h"

Piano::Piano(){}

void Piano::pout(int* a) {
    for (int i = 0; i < 7; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;
    if(*a==1){
        system("play /home/pi/code/src/audio/A5.wav");
    }else if(*(a+1)==1){
        system("play /home/pi/code/src/audio/B5.wav");
    }else if(*(a+2)==1){
        system("play /home/pi/code/src/audio/C5.wav");
    }else if(*(a+3)==1){
        system("play /home/pi/code/src/audio/D5.wav");
    }else if(*(a+4)==1){
        system("play /home/pi/code/src/audio/E5.wav");
    }else if(*(a+5)==1){
        system("play /home/pi/code/src/audio/F5.wav");
    }else if(*(a+6)==1){
        system("play /home/pi/code/src/audio/G5.wav");
    }
    
    //code
}
