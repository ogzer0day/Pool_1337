//#include <stdio.h>

int ft_is_prime(int nb)
{
    int i = 2;

    if (nb == 1 || nb == 0)
      return 0;
    while (i <= nb / 2)
    {
        if (nb % 2 == 0)
          return 0;
        i++;
    }
    return 1;
}

//int main(){
  //  printf("%d", ft_is_prime(3));
//}