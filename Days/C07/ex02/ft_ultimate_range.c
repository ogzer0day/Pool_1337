//#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *buff = malloc((max - min) * sizeof(int));
    *range = buff;
    
    if (min >= max)
    {
        free(buff);
        *range = NULL;
        return 0;
    }
     
    while (min < max)
    {
        *buff++ = min++;
    }
    return max - min;
}

//int main(){
  //  int min = 5;
    //int max = 5;

    //int *arr;
    //int size = ft_ultimate_range(&arr, min, max);

    //if (size < 0)
    //{
      //  return -1;
    //}

    //int i = 0;

    //while (i < max - min)
    //{
      //  printf("%d", arr[i]);
        //i++;
    //}

    //if (size > 0) {
      //  free(arr);
    //}
//}