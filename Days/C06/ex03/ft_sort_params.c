#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
        ft_putchar(*str++);
    ft_putchar('\n');
}

int ft_strcmp(char *s1, char *s2)
{
    int result;
    while (*s1 != '\0' && *s2 != '\0')
    {
      result = *s1 - *s2;  
      s1++;
      s2++;
    }
    return(result);
}

void ft_sort(int argc, char *argv[])
{
	char *tmp;
	int i = 1;

	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i+1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i+1];
			argv[i+1] = tmp;
			i = 0;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_param(argc, argv);
	while (i < argc)
    {
        ft_putstr(argv[i]);
        i++;
    }
}