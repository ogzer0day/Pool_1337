#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int len = 0;

    while (str[len])
         len++;
    return (len);
}

void ft_revers(char *str)
{
   int i = ft_strlen(str) - 1;

   while (i >= 0)
   {
    ft_putchar(str[i]);
    i--;
   }
}

int main(int argc, char *argv[])
{
    ft_revers(argv[1]);
}