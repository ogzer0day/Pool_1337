#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
   *********nbr = 42;
}

int main()
{
   int nbrr;
   int *nb1 = &nbrr;
   int **nb2 = &nb1;
   int ***nb3 = &nb2;
   int ****nb4 = &nb3;
   int *****nb5 = &nb4;
   int ******nb6 = &nb5;
   int *******nb7 = &nb6;
   int ********nb8 = &nb7;
   int *********nb9 = &nb8;
   
   nbrr = 42;
   ft_ultimate_ft(nbrr);
   printf("%d", nbrr);

}