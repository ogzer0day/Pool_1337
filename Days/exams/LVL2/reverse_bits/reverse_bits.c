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

unsigned char *reverse_bits(unsigned char octet) 
{
    char *bits = print_bits(octet); 
    int i = ft_strlen(bits) - 1;
    unsigned char *buff = malloc(9 * sizeof(unsigned char)); 
    unsigned char *first = buff;
    if(!buff) return NULL;

    while (i >= 0)
    {
        *buff++ = bits[i--]; 
    }
    *buff = '\0';
    free(bits); 
    return first;
}

int main()
{
    unsigned char octet = 2;
    unsigned char *result = reverse_bits(octet);
    printf("%s\n", result);
    free(result); 
}