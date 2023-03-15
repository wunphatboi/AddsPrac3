#include <iostream>
#include "Truckloads.h"
#include "Reverser.h"

int main(void){
    Truckloads t;
    Reverser r;
    //std::cout << t.numTrucks(7,3) << std::endl;
    //std::cout << r.reverseDigit(1003) << std::endl;
    std::cout << r.reverseString("12345") << std::endl;
    return 0;
}