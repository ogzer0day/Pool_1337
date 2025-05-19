#include <stdio.h>
#include <stdlib.h>
#include "ft_strs_to_tab.h"


int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
       len++;
    return len;
}

char *ft_strdup(char *src) 
{
    char *buff = malloc((ft_strlen(src) + 1) * sizeof(char)); 
    char *start = buff;  
    
    if (!*src)
      return NULL;
    
    while (*src)
    {
        *buff++ = *src++;
    }
    *buff = '\0'; 
    return start; 
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *s;

    s = malloc(sizeof (t_stock_str) * (ac + 1));
    
    if (!s)
      return NULL;

    int i = 0;

    while (i < ac)
    {
        s[i].size = ft_strlen(av[i]);
        s[i].str = av[i];
        s[i].copy = ft_strdup(av[i]);
        i++;
    }
    s[i].str = 0;
    return s;
}

int main(int ac, char *av[])
{
    int i = 0;
    struct s_stock_str *result = ft_strs_to_tab(ac - 1, av + 1);
     

    while (i < ac - 1) 
    {
       printf("%d, %s, %s\n", result[i].size, result[i].str, result[i].copy);
        i++;
    }
    free(result);
    return 0;
}
