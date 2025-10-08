#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
    return ((octet << 4) | (octet >> 4));
}

int main()
{
    unsigned char octet = 65;
    unsigned char result = swap_bits(octet);
    printf("%d", result);
    
}