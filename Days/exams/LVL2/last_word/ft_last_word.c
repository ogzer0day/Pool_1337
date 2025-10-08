#include <stdio.h>
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
    return len;
}

void ft_reversed(char *nbr)
{
  int i = ft_strlen(nbr) - 1;
  while (i >= 0)
  {
    ft_putchar(nbr[i]);
    i--;
  }
  ft_putchar('\n');
}

void ft_last_word(char *str)
{
   int i = ft_strlen(str) - 1;
   int j = 0;
   char str2[20];
      
   while ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
       i--;
       
   while (str[i] != ' ')
   {
    str2[j++] = str[i];
    i--;
   }
   str2[j] = '\0';
   ft_reversed(str2);
}

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        ft_putchar('\n');
        return 0;
    }

    ft_last_word(av[1]);
}