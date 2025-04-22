#include <unistd.h>

void ft_putchar(char c)
{
   write(1, &c, 1);
}

void print_nbrs(char a, char b, char c)
{
     ft_putchar(a);
     ft_putchar(b);
     ft_putchar(c);
    if (a < 7)
    {
       ft_putchar(',');
       ft_putchar(' ');
    }
    else 
    {
       ft_putchar(' ');
       ft_putchar('\n');
    }
}

void ft_print_comb(void)
{
    int a = 48;
    int b = 48;
    int c = 50;
     
    while (a <= '7')
    {
      b = a + 1;
       while (b <= '8')
       {
          c = b + 1;
           while (c <= '9')
           {
              print_nbrs(a, b, c);
              c++;
           }
          b++;
       }
      a++;
    }
}