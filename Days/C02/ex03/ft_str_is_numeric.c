//#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

int ft_str_is_numeric(char *str)
{
    if (ft_strlen(str) == 0) return 1;

    while (*str != '\0')
    {
       if (*str < '0' || *str > '9' ) return 0;
       str++;
    }
    return 1;
}

//int main()
//{
  // printf("%d", ft_str_is_numeric(""));
//}