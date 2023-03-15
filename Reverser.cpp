#include "Reverser.h"
Reverser::Reverser(){};

int Reverser::reverseDigit(int value){
    if (value < 0){
        return -1;
    }else if(value<10){
        return value;
    }
    int length=0;
    for (int i=value; i; i/=10){
        length++;
    }
    return value%10*(int)pow(10, length-1) + reverseDigit(value/10);
};

string Reverser::reverseString(string characters){
    if (characters.length() < 0){
        return "ERROR";
    }else if (characters.length() == 0){
        return characters;
    }else{
    return characters.substr(characters.length()-1,-1) + reverseString(characters.substr(0,characters.length()-1));
    }
};