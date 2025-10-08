#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_union(char *s2, char *s1)
{
    
}

int main(int ac, char *av[])
{
   if (ac != 2)
    {
        ft_putchar('\n');
        return 0;   
    }

    ft_union(av[1], av[2]);
}