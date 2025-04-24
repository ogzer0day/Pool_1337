//#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;
    while(str[len])
       len++;
    return (len);
}

char *ft_strcat(char *dest, char *src)
{
  int i = ft_strlen(dest);
   while (*src)
   {
    dest[i] = *src++;
     i++;
   }
   dest[i++] = '\0';
   return (dest);
}

//int main()
//{
    //char dest[20] = "hello, ";
    //char src[6] = "world";

   // ft_strcat(dest, src);
   // printf("%s", dest);
//}