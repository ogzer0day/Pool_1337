#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
   int i = 0;
   int j = 1;
   int temp;
   
   int min = 0;
   int max = 0;

   while (i < size)
   {
     j = i + 1;
     while (j < size)
     {
       
      if (tab[i] > tab[j])
      {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
         
        max = tab[j];
        min = tab[i];
      }
      j++;
     }
   i++;
   }
}

int main()
{
  int tab[] = {5, 3, 1, 2, 4};
  int size = sizeof(tab) / sizeof(tab[0]);

  ft_sort_int_tab(tab, size);
  
  int i = 0;
  while (i < size)
  {
    printf("%d", tab[i]);
    i++;
  }
}