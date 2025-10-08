#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_hidenp(char *str1, char *str2)
{
    while (*str1 && *str2)
    {
        if (*str1 != *str2)
        {
           ft_putchar('0'); 
           break;
        }
        *str1++;
        *str2++;
    }
    ft_putchar('1'); 
}

void ft_clean_str(char *str1, char *str2)
{
    char clear_str[255] = {0};
    int i = 0, l = 0, j = 0;;

    while (*str2)
    {
       j = 0;
        while (str1[j])
        {
            l = 0;
            if (str1[j] == *str2) 
            {
                while (clear_str[i])
                {
                    if (str1[j] == clear_str[i])
                    {
                        l = 1;
                        break;
                    }
                    i++;
                }
                if (l == 0)
                  clear_str[i++] = str1[j];
            }
            j++;
        }
        str2++;
    }
    ft_hidenp(clear_str, str1);
}


int main(int ac, char *av[])
{
    if (ac != 3)
       return 0;
    
    ft_clean_str(av[1], av[2]);
}