#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int    ft_is_prime(int nb)
{
    int    i;

    i = 2;
    if (nb < 2)
        return (0);
    while (i <= nb / 2)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int len_str(int num)
{
    int len = 0;
    while (num)
    {
        num /= 10;
      len++;
    }
    return len;
}

void putnbr(int num)
{
    int len = len_str(num), i=0;
    char *buff = malloc(len*sizeof(char));
    char str[10];
    if (len == 0)
    {
      ft_putchar('0');
      ft_putchar('\n');
      return;
    }

    if (len == 1)
      {
        *buff++ = num + '0';
         ft_putchar(*buff);
         return;
      }

    while (num)
    {
       str[i++] = num % 10 + '0';
       num /= 10; 
    }
    while (i > 0)
    {
        ft_putchar(str[--i]);
    }
    ft_putchar('\n');
}

void add_prime_sum(int num)
{
    int sum = 0, i=2;

   while (i <= num)
   {
       if (i == 2)
         sum += i;
       else if (ft_is_prime(i) == 1)
           sum += i;
     i++;
   }
   putnbr(sum);
}

int ft_atoi(char *str)
{
    int result = 0;
    while (*str)
    {
        if (*str == '-')
            break;
        else 
          result = result * 10 + (*str - '0');
     str++;
    }
    return (result); 
}

int main(int ac, char *av[])
{
    if (ac != 2) 
    {
        ft_putchar('0'); 
        ft_putchar('\n');
        return 0;
    }
    
    int num = ft_atoi(av[1]);
    add_prime_sum(num);
    return 0;
}