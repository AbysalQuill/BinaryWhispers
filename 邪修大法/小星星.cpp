#include <iostream>
#include <windows.h>
using namespace std;
#define M1 523 
#define M2 587 
#define M3 659 
#define M4 698 
#define M5 784 
#define M6 880 
#define M7 988 
#define H1 1046
#define H2 1175
#define H3 1319
#define H4 1397
#define H5 1568
#define H6 1760
#define H7 1976
#define L1 262
#define L2 294
#define L3 330
#define L4 349
#define L5 392
#define L6 440
#define L7 494
#define R 0     
void play(int freq, int dur) {
    if(freq) Beep(freq, dur);
    else Sleep(dur);
}
int main() {
    int melody[] = {
        M1, M1, M5, M5, M6, M6, M5, M5,
        M4, M4, M3, M3, M2, M2, M1, M1,
        M5, M5, M4, M4, M3, M3, M2, M2,
        M5, M5, M4, M4, M3, M3, M2, M2,
        M1, M1, M5, M5, M6, M6, M5, M5,
        M4, M4, M3, M3, M2, M2, M1, M1
    };
    int duration[] = {
        500,500,500,500,500,500,1000,500,
        500,500,500,500,500,500,1000,500,
        500,500,500,500,500,500,1000,500,
        500,500,500,500,500,500,1000,500,
        500,500,500,500,500,500,1000,500,
        500,500,500,500,500,500,1000,500
    };
    for(int i=0; i<sizeof(melody)/sizeof(int); i++){
        play(melody[i], duration[i]);
    }
}