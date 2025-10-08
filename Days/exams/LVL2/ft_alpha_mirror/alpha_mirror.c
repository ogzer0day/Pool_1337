#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_alpha_mirror(char *str)
{
    char arr1[] = "abcdefghijklmnopqrstuvwxyz";
    char arr2[] = "zyxwvutsrqponmlkjihgfedcba";
    int i = 0;

    while (*str != '\0')
    {
        i = 0;
        while (arr1[i] != '\0' && arr2[i] != '\0')
        {
          if (*str == arr1[i])
            ft_putchar(arr2[i]);
          else if (*str == arr1[i] - 32)
            ft_putchar(arr2[i] - 32);
        i++;
        } 
        if (*str == ' ' || *str == '.')
             ft_putchar(*str);   
     str++; 
    }
}

int main(int ac, char *av[])
{
   int i = 1;

   if (ac != 2)
   {
    ft_putchar('\n');
    return 0;
   }
    
    ft_alpha_mirror(av[i]);
    ft_putchar('\n'); 
}