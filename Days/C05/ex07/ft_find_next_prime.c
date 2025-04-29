//#include <stdio.h>

int ft_is_prime(int nb)
{
  int i = 2;

    while (i <= nb / 2)
    {
        if (nb % i == 0)
          return 1;
      i++;   
    }
    return 0;
}

int ft_find_next_prime(int nb)
{
    int i = 0;
    nb = nb + 1;
    
    if (nb == 1 || nb == 0)
      return 0;
    while (i >= 0)
    {
        if (!ft_is_prime(nb))
          return nb;
      nb++;
      i++;
    }
    
}

//int main(){
  //  printf("%d", ft_find_next_prime(19));
//}