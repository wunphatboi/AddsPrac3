#include "Reverser.h"
Reverser::Reverser(){};

int Reverser::reverseDigit(int value){
    if (value < 0){
        return -1;
    }else if(value<10){
        return value;
    }
    int len=0;
    for (int i=value; i; i/=10){
        len++;
    }
    return value%10*(int)pow(10, len-1) + reverseDigit(value/10);
};