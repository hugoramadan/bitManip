#include <stdio.h>
#include <string.h>
#include <bitManip.h>


/* Print in binary format */
void printInBinary(unsigned int value)
{
    char tmpString[sizeof(value)*8+1] = "";

    do
    {
        strcat_s(tmpString, sizeof (tmpString), value % 2 ? "1" : "0");
    } while ((value = (int)(value/2)));

    printf("%s\n", _strrev(tmpString));

}


/* Returns a string with a binary representation */
char *binaryRepr(unsigned int value)
{
    char *tmpString = "";

    do
    {
        strcat_s(tmpString, sizeof(value)*8+1, value % 2 ? "1" : "0");
    } while ((value = (int)(value/2)));

    return _strrev(tmpString);
}


/* Toggle bits in value */
void toogleBit(byte *value, bitMask mask)
{
    *value ^= mask;
    return;
}

void toogleBit_s(unsigned short *value, bitMask mask)
{
    *value ^= mask;
    return;
}

/* Set bits in value */
void setBit(byte *value, bitMask mask)
{
    *value |= mask;
    return;
}

void setBit_s(unsigned short *value, bitMask mask)
{
    *value |= mask;
    return;
}

/* Clear bits in value */
void clearBit(byte *value, bitMask mask)
{
    *value &= ~mask;
    return;
}

void clearBit_s(unsigned short *value, bitMask mask)
{
    *value &= ~mask;
    return;
}
