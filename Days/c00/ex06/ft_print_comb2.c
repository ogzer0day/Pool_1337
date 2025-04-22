#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_nbrs(char a, char b, char c, char d)
{
     ft_putchar(a);
     ft_putchar(b);
     ft_putchar(' ');
     ft_putchar(c);
     ft_putchar(d);
    if (a == '9' && b == '8' && c == '9' && d == '9')
    {
       ft_putchar('.');
       ft_putchar('\n');
    }
    else 
    {
       ft_putchar(',');
       ft_putchar(' ');
    }
}

void ft_print_comb2(void)
{
    char a, b, c, d;

    a = '0';
    while (a <= '9')
     {
        b = '0';
         while (b <= '9')
        {
           c = a;
          while (c <= '9')
            { 
               d = (c == a ? b+1 : '0');
                while (d <= '9')
                {
                    print_nbrs(a, b, c, d);
                    d++;
                }
              c++; 
            } 
         b++;
        }
      a++;
     }
}