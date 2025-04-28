//#include <stdio.h>

int ft_check_signe(char *str)
{
    int count = 1;
    while (*str)
    {
        if (*str == '-') 
            count *= -1;
        else if (*str == '+')
            count *= 1;
        else 
           break;
        str++;
    }
    return (count);
}

char* ft_check_spaces(char *str)
{
    while (*str)
    {
        if (*str == '\t' || *str == '\b' || *str == ' ')
            str++; 
        else 
            break; 
    }
    return str; 
}

int ft_atoi(char *str)
{
    str = ft_check_spaces(str); 
    int count = ft_check_signe(str); 
    int result = 0;
    while (*str != '\0')
    {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) 
            break;
        else if (*str >= '0' && *str <= '9')
            result = result * 10 + (*str - '0'); 
        str++;
    }
    return (count * result);
}

//int main()
//{
  //  printf("%d\n", ft_atoi("  --+--+1234ab567")); 
//}