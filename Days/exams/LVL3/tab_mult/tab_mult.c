#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_atoi(char *num)
{
    int result = 0;

    while (*num)
    {
       result = result * 10 + (*num - '0');
      num++;
    }
    return result;
}

char put_num(int num)
{
    if (num > 9)
      put_num(num / 10);
    
    int n = num % 10;
    ft_putchar(n + '0');
}

void tab_mult(int num)
{
    int i = 1, mult = 0;
    
    while (i <= 9)
    {
       mult = i * num;
       if (i > 9)
          put_num(i);
        if (i <= 9) 
          ft_putchar(i + '0');
        ft_putchar(' ');
        ft_putchar('x');
        ft_putchar(' ');
        if (num > 9)
          put_num(num);
        if (num <= 9) 
          ft_putchar(num + '0');
        ft_putchar(' ');
        ft_putchar('=');
        ft_putchar(' ');
        if (mult > 9)
          put_num(mult);
        if (mult <= 9)
          ft_putchar(mult + '0');
        
        ft_putchar('\n');
        mult = 0;
        i++;
    }
}

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        ft_putchar('\n');
        return 0;
    }
   
    int num = ft_atoi(av[1]);
    tab_mult(num);
}