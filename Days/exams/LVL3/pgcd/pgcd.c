#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int result = 0;

    while (*str)
    {
        result = result * 10 + (*str - '0');
      str++;
    }
    return result;
}

void ft_pgcd(char *num1, char *num2)
{
    int n1 = ft_atoi(num1);
    int n2 = ft_atoi(num2);
    int i = n1 - 1, j = n2 - 1, hcf = 0;
     
     if (n1 == 0 || n2 == 0)
       printf("%d", 0);

     while (i >= 1)
     {
         if (n1 % i == 0)
         {
            j = n2 - 1;
            while (j >= 1)
            {
              if (n2 % j == 0)
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
     printf("%d", hcf);
     printf("\n");
}

int main(int ac, char *av[])
{
   if (ac != 3)
   {
      printf("\n");
      return 0;
   }

   ft_pgcd(av[1], av[2]);
}