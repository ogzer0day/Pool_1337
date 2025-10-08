#include <stdio.h>
#include <stdlib.h>

int ft_len(int start, int end)
{
   int len = 0;
   while (start != end)
   {
      len++;
      if (end < start)
         start--;
      if (end > start)
         start++;
   }
   return len; 
}

int     *ft_rrange(int start, int end)
{
    int len = ft_len(start, end);
    int *buff = malloc((len+1)*sizeof(int));
    int *buff2 = malloc((len+1)*sizeof(int));
    int *first = buff, i=0;

    while (start != end)
    {
        if (end < start)
          buff2[i++]= start--;
        if (end > start)
        buff2[i++] = start++;
    }
    buff2[i] = end;

    while (i >= 0)
    {
        *buff++ = buff2[i--];
    }
    free(buff2);
    return first;  
}

int main()
{
    int start = 0, end = -3; 
    int *result = ft_rrange(start, end);
    int i = 0;
    int len = ft_len(start, end);
    
    while (i <= len)
    {
      printf("%d ", result[i++]);
    }
    free(result);
}