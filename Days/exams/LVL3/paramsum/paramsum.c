#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_num(int num) 
{
  if (num >= 10)
     ft_print_num(num /10);

   num = (num % 10) + '0';
   ft_putchar(num);
}

int main(int ac, char *av[])
{
    int i = 0;

    if (ac < 2)
    {
        ft_putchar('0');
        ft_putchar('\n');
        return 0;
    }

    else 
    {
       while (av[i])
       i++;
     
       ft_print_num(i-1);
    }
    ft_putchar('\n');
}