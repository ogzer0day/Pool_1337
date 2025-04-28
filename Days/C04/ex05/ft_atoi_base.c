//#include <stdio.h>

int ft_len_base(char *base)
{
    int len = 0;
    while (base[len])
        len++;
    return (len);
}

char ft_check_invalid_arg(char *str, char *base)
{
       if (ft_len_base(base) <= 1)
           return 0;

        int i = 0;
        int j = i+1;
        while (base[i] != '\0')
        {
            j= i + 1;
            while (base[j] != '\0')
            {
            if (*base == '+' || *base == '-' || base[i] == base[j])
                {
                    return 0;
                }
            j++;
            }
          i++;  
        }
}

int ft_base_16(char *str, char *base)
{
   int result = 0, i = 0;
   while (*str)
   {
     i = 0; 
     while (base[i] != '\0')
     {
        if (base[i] == *str)
        {
           result = result * 16 + i;
           break;
        } 
       i++;
     }
    str++;
   }
   return (result);
}

int ft_atoi_base(char *str, char *base)
{   
   int result = 0;
   int len = ft_len_base(base);

   ft_check_invalid_arg(str, base);

   if (len == 10 || len == 8 || len == 2)
   {
    while (*str)
    {
        result = result * len + (*str - 48);
        str++;
    }
    return (result);
   }

    if (len == 16)
    ft_base_16(str, base);
}

//int main() 
//{
  //  char *base = "01"; 
    //char *str = "101010"; 
    //int result = ft_atoi_base(str, base); 
    //printf("%d\n", result); 
    //return 0; 
//}