//#include <unistd.h>

void ft_putchar(char c)
{
   write(1, &c, 1);
}

int ft_strlen(char *base)
{
    int len = 0;
    while (base[len])
         len++;
    return len; 
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

void ft_putnbr2(int nb)
{
    char buff[12];
    int index = 0;
    if (nb == 0)
    {
       ft_putchar('0');
       return;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    } 
    while (nb > 0)
    {
       ft_putchar(nb % 10 + 48);
       nb /= 10;
    }
}

void ft_to_hex(int nbr, char *base)
{
    int div = nbr, rem = 0, i = 0;
    char buff[11];
    while (div != 0)
    {
        rem = div % 16;
        buff[i++] = base[rem];
        div /= 16;
    }
    buff[i++] = '\0';
    ft_reversed(buff);
}

void ft_to_binary(int nbr, char *base)
{
    int div = nbr, rem = 0, i = 0, mul = 0;
    char buff[20];
    while (div != 0)
    {
        rem = div % 2;
        mul = mul * 10;
        buff[i++] = mul * 10 + (rem + 48);
        div /= 2;
    }
    buff[i++] = '\0';
    ft_reversed(buff);
}

void ft_to_octal(int nbr, char *base)
{
    int div = nbr, rem = 0, modul = 0;
    while (div != 0)
    {
        modul = div % 8;
        rem = rem * 10 + modul;
        div /= 8;
    }
    ft_putnbr2(rem);  
}

void ft_putnbr_base(int nbr, char *base)
{
    if (ft_strlen(base) == 10)
    {
        ft_putnbr(nbr);
        return;
    }
    if (ft_strlen(base) == 16)
    {
        ft_to_hex(nbr, base);
        return;
    }
    if (ft_strlen(base) == 2)
    {
       ft_to_binary(nbr, base);
       return;
    }
    if (ft_strlen(base) == 8)
    {
        ft_to_octal(nbr, base);
       return;
    }
}

//int main()
//{
  //  ft_putnbr_base(10, "01");        // Binary
    //ft_putchar('\n');
    //ft_putnbr_base(10, "01234567");  // Octal
    //ft_putchar('\n');
    //ft_putnbr_base(10,"0123456789abcdef"); // Hexadecimal
    //ft_putchar('\n');
    //ft_putnbr_base(110, "0123456789"); // Decimal
    //ft_putchar('\n');
//}