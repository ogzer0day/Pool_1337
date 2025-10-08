#include <unistd.h>
#include <stdlib.h>

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

int num_of_spaces(char *str, int index)
{
    int count = 0;
    while (str[index] == ' ')
     {
        count++;
        index++;
     }
    return count;
}

void ft_expand_str(char *str)
{
   int i = 0, num_spaces, j = ft_strlen(str)-1;
   while (str[i])
   {
      if (str[i] == ' ')
       {
        num_spaces = num_of_spaces(str, i);
          if (i != 0 && i != j)
          {
            ft_putchar(' ');
            ft_putchar(' ');
            ft_putchar(' ');
          }
          i += num_spaces;
       } 
      else
      {
        ft_putchar(str[i]);
        i++;
      }
   }
   ft_putchar('\n');
}

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        ft_putchar('\n');
        return 0;
    }
    
    ft_expand_str(av[1]);
}