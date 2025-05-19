#include <stdlib.h>
//#include <stdio.h>

int *ft_range(int min, int max)
{
    int *buff = malloc((max - min) * sizeof(int));
    int *start = buff;
    
    if (min >= max)
      return NULL;

    while (min < max)
    {
        *buff++ = min++;
    }
    *buff++ = '\0';
    return start;
}

//int main()
//{
  // int min = 1;
  // int max = 10;
   
//   int *buff = ft_range(min, max);

  // if (buff == NULL)
   //{
     // printf ("error");
      //return 1;
   //}
   
   //int i  = 0; 
   //while (i < max - min)
   //{
      // printf("%d", buff[i]);
       //i++;
   //}
   
   //free(buff);
//}