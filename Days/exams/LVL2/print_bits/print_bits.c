#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

char *decimal_to_binary(int num)
{
    char *buff = malloc(9*sizeof(char));
    char *first = buff;
    if(!buff) return NULL;
    char str[9];
    int i = 0;
    
    while (num != 0)
    {
       str[i++] = (num % 2) + '0';
       num /= 2; 
    }
   i -= 1;
   while (i >= 0)
   {
     *buff++ = str[i--];
   }
  *buff = '\0';
   return (first);
}

void    print_bits(unsigned char octet)
{
    int num =  (int)octet;
    char *binary = decimal_to_binary(num);
    int len = ft_strlen(binary), i = 8;

    while (i > len)
    {
       putchar('0'); 
       i--;
    }

    while (*binary)
    {
        putchar(*binary++);
    }
    free(binary - len);
}

int main()
{
    print_bits(100);
}