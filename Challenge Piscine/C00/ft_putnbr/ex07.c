#include <unistd.h>

void ft_print(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if (nb < 0)
  {
    ft_print('-');
    if (nb == -2147483648)
    {
      nb = nb / 10;
      ft_putnbr(-nb);
      ft_print('8');
    }
    else
      ft_putnbr(-nb);
  }
  else
  {
    if (nb > 10)
      ft_putnbr(nb / 10);
    ft_print('0' + nb % 10);
  }
}