#ifndef BITMANIP
#define BITMANIP

/*_BITARC select between 8 or 16 bits architeture*/


typedef enum {
    BIT0  = 0x0001,
    BIT1  = 0x0002,
    BIT2  = 0x0004,
    BIT3  = 0x0008,
    BIT4  = 0x0010,
    BIT5  = 0x0020,
    BIT6  = 0x0040,
    BIT7  = 0x0080,

    BIT8  = 0x0100,
    BIT9  = 0x0200,
    BIT10 = 0x0400,
    BIT11 = 0x0800,
    BIT12 = 0x1000,
    BIT13 = 0x2000,
    BIT14 = 0x4000,
    BIT15 = 0x8000,
} bitMask;

typedef unsigned char byte;



void printInBinary(unsigned int value);

char *binaryRepr(unsigned int value);


/*8-bit manipulation */
void toogleBit(byte *value, bitMask mask);

void clearBit(byte *value, bitMask mask);

void setBit(byte *value, bitMask mask);


/*16-bit manipulation */
void toogleBit_s(unsigned short *value, bitMask mask);

void clearBit_s(unsigned short *value, bitMask mask);

void setBit_s(unsigned short *value, bitMask mask);



/* Example code
 *
    int main(){

        byte data = 0b10010000;
        printInBinary(data);
        setBit(&data, BIT6 | BIT3);
        printInBinary(data);

        return 0;
    }
*
*/

#endif
