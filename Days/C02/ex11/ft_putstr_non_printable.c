#include <unistd.h>

void ft_putchar(char c)
{
   write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
    char hexadecimals[17] = "0123456789abcdef";
    while (*str)
    {
        if (*str < 32)
        {
            ft_putchar('\\');
            ft_putchar(hexadecimals[*str / 16]);
            ft_putchar(hexadecimals[*str % 16]);
        }
        else 
           ft_putchar(*str);
    str++;
    }
}

//int main()
//{
   // ft_putstr_non_printable("Coucou\btu vas bien ?");
//}

