#include <stdio.h>
#include <stdlib.h>
#include "ft_convert_base.c"

int ft_check_signe(char *str)
{
    int count = 1;
    while (*str)
    {
        if (*str == '-') 
            count *= -1;
        else if (*str == '+' || *str == ' ')
            count *= 1;
        else 
           break;
        str++;
    }
    return (count);
}

char* ft_reversed(char *nbr)
{
    int i = ft_len_base(nbr) - 1;
    int j = 0;
    char *buff = malloc((i + 2) * sizeof(char)); 

    while (i >= 0)
        buff[j++] = nbr[i--];
    
    buff[j] = '\0'; 
    return buff; 
}

char* ft_putnbr_base(int nbr, char *base)
{
    char nb[10];
    int i = 0;
    int rem;
    
    if (nbr < 0)
     nbr = -nbr;

    if (nbr == 0) 
    {
        return ft_reversed("0");
    }

    while (nbr != 0)
    {
        rem = nbr % ft_len_base(base);
        nb[i++] = base[rem];
        nbr /= ft_len_base(base); 
    }
    nb[i] = '\0'; 
    return ft_reversed(nb); 
}

char* ft_convert_base2(char *nbr, char *base_from, char *base_to)
{
    if ((!ft_check_invalid_arg(base_from)) || (!ft_check_invalid_arg(base_to)))
      return NULL;

    int result = ft_convert_base(nbr, base_from); 
    char* result2 = ft_putnbr_base(result, base_to); 
    int i = 0;
    char *buff = malloc((ft_len_base(result2) + 1) * sizeof(char));
    char *start = buff;
    
    if (ft_check_signe(nbr) < 0)
      *buff++ = '-';
    
    while (result2[i] != '\0')
        *buff++ = result2[i++];
    *buff++ = '\0';
    
    free(result2); 
    return start;
}
