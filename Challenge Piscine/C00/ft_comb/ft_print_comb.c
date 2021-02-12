#include <unistd.h>

void ft_print_comb(void)
{
  int cen;
  int dez;
  int uni;

  cen = '0' - 1;
  while (cen++ < '7')
  {
    dez = cen;
    while (dez++ < '8')
    {
      uni = dez;
      while (uni++ < '9')
      {
        write(1, &cen, 1);
        write(1, &dez, 1);
        write(1, &uni, 1);
        write(1, ",", 1);
        write(1, " ", 1);
      }
    }
  }
}

int main(void)
{
  ft_print_comb();
}
