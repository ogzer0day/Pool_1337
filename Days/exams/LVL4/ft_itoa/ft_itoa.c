#include <stdlib.h>
#include <stdio.h>

int len(int num)
{
    int len = 0;
    while (num != 0)
    {
        len++;
        num /= 10;
    }
    return len;
}

int ft_strlen(char *str)
{
    int len = 0;
    
    while (str[len])
       len++;
       
    return len;
}

char *put_nbr(int num)
{
    char *buff = malloc((len(num)+2)*sizeof(char));
    char *first = buff;
    if (num < 0)
    {
        num = -num;
        *buff++ = '-';
    }

     while (num != 0)
     {
        *buff++ = (num % 10) + '0';
        num /= 10;
     }
     *buff = '\0';
     return first;
}

char    *ft_itoa(int nbr)
{
    char *buff = malloc((len(nbr)+2)*sizeof(char));
    char *first = buff;
    if (nbr < 0)
       *buff++ = '-';
    char *result = put_nbr(nbr);
    int i = ft_strlen(result) - 1;
    
  if (nbr > 0)
  {
    while (i >= 0)
      *buff++ = result[i--];
  }
  else 
  {
    while (i > 0)
    *buff++ = result[i--];
  }
    *buff = '\0';
    free(result);
    return first;
}

int main()
{
   char *result = ft_itoa(12);

   printf("%s", result);
   
   free(result);
}