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

char ft_capitalized_first_word(char *str)
{
    int i =  0, j = 0;
    char str1[255] = {0};

    if (str[0] >= 'a' && str[0] <= 'z')
      ft_putchar(str[0] - 32);

    i++;
    while (str[i])
    {
       if ((str[i] >= 'a' && str[i] <= 'z') && (str[i-1] == ' ')) 
         ft_putchar(str[i] - 32);
       else 
         ft_putchar(str[i]);
     i++;
    }
}

void str_capitalizer(char *str)
{
    char str1[255] = {0};
    int i = 0;

    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
            str1[i++] = *str + 32; 
        else 
            str1[i++] = *str;
        str++;
    }
    str1[i] = '\0';
    ft_capitalized_first_word(str1);
}

int main(int ac, char *av[])
{
    if (ac < 2)
    {
        ft_putchar('\n');
        return 0;
    } 

    int i = 1;

    while (i < ac) 
    {
        str_capitalizer(av[i]);
        ft_putchar('\n');
        i++;
    }
    ft_putchar('\n');
}