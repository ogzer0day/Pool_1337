#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"
#include "ft_show_tab2.c"


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


void ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

void ft_show_tab(struct s_stock_str *par)
{
    while (par->str != NULL) 
    {
        ft_putnbr(par->size);
        putchar('\n');
        ft_putstr(par->str); 
        putchar('\n');
        ft_putstr(par->copy);
        putchar('\n');
        par++;
    }
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *s;

    s = malloc(sizeof (t_stock_str) * (ac + 1));
    
    if (!s)
      return NULL;

    int i = 0;

    while (i < ac - 1)
    {
        s[i].size = ft_strlen(av[i]);
        s[i].str = av[i];
        s[i].copy = ft_strdup(av[i]);
        i++;
    }
    s[i].str = 0;
    return s;
}

int main()
{
    int i = 0;
    char *av[] = {"hello", "world", "42"};
    int ac = 4;

    struct s_stock_str *result = ft_strs_to_tab(ac, av);
    ft_show_tab(result);
    
    free(result);
    return 0;
}