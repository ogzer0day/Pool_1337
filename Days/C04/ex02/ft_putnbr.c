#include <unistd.h>

void ft_putchar(char c)
{
   write(1, &c, 1);
}

int ft_strlen(char *num)
{
  int len = 0;
  while (num[len] != '\0')
     len++;
  return(len);
}

void ft_reversed(char *nbr)
{
  int i = ft_strlen(nbr) - 1;
  while (i >= 0)
  {
    ft_putchar(nbr[i]);
    i--;
  }
}

void ft_putnbr(int nb)
{
    char buff[12];
    int index = 0;
    if (nb == 0)
    {
       ft_putchar('0');
       return;
    }
    if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
        return;
	} 
    if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
    } 
    while (nb > 0)
    {
       buff[index++] = nb % 10 + 48;
       nb /= 10;
    }
     buff[index++] = '\0';
    ft_reversed(buff);
}

//int main()
//{
  //  ft_putnbr(42);
//}