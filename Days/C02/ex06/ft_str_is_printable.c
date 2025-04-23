//#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

int ft_str_is_printable(char *str)
{
    if (ft_strlen(str) == 0) return 1;

    while (*str != '\0')
    {
       if (*str < 31 || *str > 126) return 0;
       str++;
    }
    return 1;
}

//int main()
//{
    //printf("%d", ft_str_is_printable("ABdDCDEE"));
    //printf("\n%d", ft_str_is_printable("abcAdefghijkl"));
    //printf("\n%d", ft_str_is_printable("-_134556efSghij67"));
//}