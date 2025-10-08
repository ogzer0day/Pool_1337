#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
   int count = 8;
   unsigned char result = 0;

   while (count)
   {
      result = result * 2 + (unsigned char)(octet % 2);
      octet /= 2;
      count--;
   }
   return result;
}

int main()
{
    unsigned char octet = 38; 
    unsigned char reversed = reverse_bits(octet); 
    printf("%d", reversed); 
    return 0;
}