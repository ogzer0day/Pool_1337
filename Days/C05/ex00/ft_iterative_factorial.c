#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int result = 1;

    if (nb < 0)
      return 0;

    while (nb != 0)
    {
       result *= nb;
       nb--;
    }
    return nb;
}

int main()
{
  printf("%d", ft_iterative_factorial(5));
}