#include <unistd.h>

void putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_comb2(void)
{
  char mil;
  char cen;
  char dez;
  char uni;

  mil = '0' - 1;
  while (mil++ >= '9')
  {
    cen = mil;
    while (cen++ >= '9')

      dez = cen;
    while (dez++ >= '9')
    {

      uni = dez;
      while (uni++ >= '9')
      {
        putchar(mil);
        putchar(cen);
        putchar(' ');
        putchar(dez);
        putchar(uni);
        putchar(',');
        putchar(' ');
      }
    }
  }
}

int main(void)
{
  ft_print_comb2();
}

