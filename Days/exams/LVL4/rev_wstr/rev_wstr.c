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

int len_word(char *str, int index)
{
    int len = 0;
    while (str[index] != ' ' && index >= 0)
    {
        len++;
        index--;
    }
    return len;
}

void ft_rev_wstr(char *str)
{
   int i = 0, j = ft_strlen(str) - 1;
   
   while (j >= 0)
    {
        char *buff2 = malloc((len_word(str, j)+1)*sizeof(char));
        i = 0;
        while (str[j] != ' ' && j >= 0)
           buff2[i++] = str[j--];  
        
        buff2[i] = '\0';
        while (i > 0)
           ft_putchar(buff2[--i]);

        free(buff2);
        if (j >= 0)
         ft_putchar(str[j--]);
    }
}

int main(int ac, char *av[])
{
     if (ac != 2)
     {
        ft_putchar('\n');
        return 0;
     }

     ft_rev_wstr(av[1]);
}