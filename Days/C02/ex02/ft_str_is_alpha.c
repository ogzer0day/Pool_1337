//#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

int ft_str_is_alpha(char *str)
{
    if (ft_strlen(str) == 0) return 1;
    while (*str)
    {
        if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
        {
            return 1;
        }
        str++;
    }
    return 0;
}

//int main()
//{
    //printf("%d", ft_str_is_alpha("hllo"));
//}