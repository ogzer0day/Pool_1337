#include <stdlib.h>
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

int count_words(char *str)
{
    int count = 0, i = 0;
    while (str[i] == ' ')
      i++;
   while (str[i])
   {
       while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            i++;
        }
      while  (str[i] == ' ' || str[i] == ',')
        i++;
    count++;
   }
   return count;
}

void ft_rostring(char *str)
{
    int i = 0, j = ft_strlen(str) - 1, k = 0, spaces = 0, words = count_words(str);
    
    while (str[i] == ' ')
    {
        i++;
        k++;
    }

    if (words > 1)
    {
    while (j == ' ')
        j--;

    while (str[i] != ' ')
       i++;

    while (i <= j)
    {
        spaces = 0;
        while (str[i] == ' ')
        {
            spaces += 1;
           if (spaces <= 1)
             ft_putchar(str[i]);
          i++;
        }
          ft_putchar(str[i++]);
    }
    i = k;
      ft_putchar(' ');
    while (str[i] != ' ')
       ft_putchar(str[i++]);
    }
    else 
       while (str[i] != ' ' && str[i])
         ft_putchar(str[i++]);
    
}

int main(int ac, char *av[])
{
    if(ac != 2)
    {
        ft_putchar('\n');
        return 0;
    }

    ft_rostring(av[1]);
}