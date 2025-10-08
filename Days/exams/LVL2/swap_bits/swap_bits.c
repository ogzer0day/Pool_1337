#include <unistd.h>
#include <stdio.h>
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

char *decimal_to_binary(int num)
{
    char *buff = malloc(9 * sizeof(char));
    char *first = buff;
    if(!buff) return NULL;
    char str[9];
    int i = 0;
    
    while (num != 0)
    {
        str[i++] = (num % 2) + '0';
        num /= 2; 
    }
    while (i > 0) 
    {
        *buff++ = str[--i];
    }
    *buff = '\0'; 
    return first;
}

char *print_bits(unsigned char octet)
{
    int num = (int)octet;
    char *binary = decimal_to_binary(num);
    int len = ft_strlen(binary), i = 8, j = 0;
    char *str = malloc(9 * sizeof(char)); 
    if (!str) return NULL;

    while (i > len)
    {
        str[j++] = '0'; 
        i--;
    }

    while (*binary)
    {
        str[j++] = *binary++;
    }
    str[j] = '\0'; 
    free(binary - len);
    return str;
}

unsigned char	*swap_bits(unsigned char octet)
{
    char *bits = print_bits(octet);
    unsigned char *buff = malloc(9 * sizeof(unsigned char)); 
    unsigned char *first = buff;
    int i = 4, j = 0;

    while (i < 8)
    {
        *buff++ = bits[i++];
    }
    while (j < 4)
    {
        *buff++ = bits[j++];
    }
    *buff = '\0';
    free(bits);
    return first;
}

int main()
{
    unsigned char octet = 65;
    unsigned char *result = swap_bits(octet);
    printf("%s", result);
    free(result);
}