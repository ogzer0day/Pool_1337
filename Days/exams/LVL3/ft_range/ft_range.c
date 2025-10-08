#include <stdlib.h>
#include <stdio.h>

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

int     *ft_range(int start, int end)
{
    int len = ft_len(start, end);
    int *buff = malloc((len+1)*sizeof(int));
    int *first = buff;

    while (start != end)
    {
        if (end < start)
          *buff++ = start--;
        if (end > start)
        *buff++ = start++;
    }
    *buff = end;
    return first;   
}

int main()
{
    int start = -1, end = 3; 
    int *result = ft_range(start, end);
    int i = 0;
    int len = ft_len(start, end);
    
    while (i <= len)
    {
      printf("%d ", result[i++]);
    }
    free(result);
}