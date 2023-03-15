#ifndef REVERSER_H
#define REVERSER_H
#include <math.h>
#include <string>
using namespace std;
class Reverser{
    public:
    Reverser();
    int reverseDigit(int value);
    string reverseString(string characters);
};
#endif