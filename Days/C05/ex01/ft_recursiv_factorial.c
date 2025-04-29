#include <stdio.h>

int ft_recursiv_factorial(int nb)
{

    if (nb < 0)
      return 0;
    else if (nb == 1)
        return 1;
    else 
       return nb * ft_recursiv_factorial(nb-1);
}

int main()
{
  printf("%d", ft_recursiv_factorial(5));
}