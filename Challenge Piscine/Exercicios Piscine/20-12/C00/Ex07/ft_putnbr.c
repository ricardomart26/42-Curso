#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
  if (nb < 0)
  {
    ft_putchar('-');
    if (nb == -2147483648)
    {
      nb = nb / 10;
      ft_putnbr(-nb);
      ft_print('8');
    }
    else
      ft_putnbr(-nb);
  }
  else if (nb > 10)
    ft_putnbr(nb / 10);
  ft_putchar(48 + nb % 10);
}

int main(void)
{
  ft_putnbr(-12401);
}