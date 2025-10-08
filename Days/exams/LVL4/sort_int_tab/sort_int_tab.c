#include <stdlib.h>
#include <unistd.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0, j = i+1;
    int *buff = malloc(size*sizeof(char));
    int  max = 0;

    while (i <= size)
    {
        j = i+1;
        while (j <= size)
        {
           if (tab[i] > tab[j])
             j++;
           else 
             max = tab;
        }
    }
}

int main()
{
    int *tab = {5, 3, 7, 3, 2, 5};
    unsigned int size = sizeof(int) / sizeof(tab[0]);
}