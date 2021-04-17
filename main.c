#include <stdio.h>
#include "bitManip.h"



int main(){

    byte data = 0b10010000;
    printInBinary(data);
    setBit(&data, BIT6);
    printInBinary(data);

    return 0;
}
