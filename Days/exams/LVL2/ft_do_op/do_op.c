#include <stdio.h>
#include <unistd.h>
#include "do_op.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_atoi(char *str)
{
    int result = 0;
    int count = ft_check_signe(str);
    while (*str)
    {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
          break;
        else if (*str >= '0' && *str <= '9')
             result = result * 10 + (*str - 48);
      str++;
    }  
  return (result * count);
}

int ft_check_signe(char *str)
{
    int count = 1;
    while (*str)
    {
        if (*str == '-') 
            count *= -1;
        else if (*str == '+')
            count *= 1;
        else 
           break;
        str++;
    }
    return (count);
}
void ft_do_op(int nb1, char *op, int nb2)
{
    int result = 0;
    if (*op == '+')
    {
        result = nb1 + nb2;
        printf("%d", result);
    }
    if (*op == '-')
    {
        result = nb1 - nb2;
        printf("%d", result);
    }
    if (*op == '/')
    {
        result = nb1 / nb2;
        printf("%d", result);
    }
    if (*op == '*')
    {
        result = nb1 * nb2;
        printf("%d", result);
    }
    if (*op == '%')
    {
        result = nb1 % nb2;
        printf("%d", result);
    }   
}


int main(int ac, char *av[])
{
    if (ac != 4)
    {
        putchar('\n');
        return 0;
    }
        int nb1 = ft_atoi(av[1]);
        char *op = av[2];
       int nb2 = ft_atoi(av[3]);
 
       ft_do_op(nb1, op, nb2);
       putchar('\n');
}