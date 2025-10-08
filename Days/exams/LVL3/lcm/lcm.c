#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
     int i = a - 1, j = b - 1, hcf = 0;
     
     if (a == 0 || b == 0)
       return 0;

     while (i >= 1)
     {
         if (a % i == 0)
         {
            j = b - 1;
            while (j >= 1)
            {
              if (b % j == 0)
              {
                 if (i == j)
                 {
                    hcf = i;
                    break;
                 } 
              }
              j--;
            }
         }
         if (hcf != 0)
           break;  
       i--;
     }

     return  (a*b) / hcf;
}

int main()
{
    unsigned int a = 0;
    unsigned int b = 15;
    unsigned int result = lcm(a, b);

    printf("%d", result);
}