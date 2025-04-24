//#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return(len);
}

char *ft_strncat(char *dest, char *src, unsigned int n)
{
  int i = ft_strlen(dest);
  int j = 0;
   while (j != n)
   {
    dest[i] = src[j];
     i++;
     j++;
   }
   dest[i++] = '\0';
   return (dest);
}

//int main()
//{
    //char dest[20] = "hello, ";
    //char src[6] = "world";
    //unsigned int n = 5;

   // ft_strncat(dest, src, n);
   // printf("%s", dest);
//}