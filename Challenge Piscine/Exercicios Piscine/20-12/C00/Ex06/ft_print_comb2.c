#include <unistd.h>
#include <stdbool.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void print_comb(int a, int b, bool last)
{
  ft_putchar('0' + a / 10);
  ft_putchar('0' + a % 10);
  ft_putchar(' ');
  ft_putchar('0' + b / 10);
  ft_putchar('0' + b % 10);
  if (!(last))
  {
    ft_putchar(',');
    ft_putchar(' ');
  }
}

void ft_print_comb2(void)
{
  int a;
  int b;
  bool last;

  a = 0;
  while (a <= 98)
  {
    b = a + 1;
    while (b <= 99)
    {
      last = (a == 98 && b == 99);
      print_comb(a, b, last);
      b++;
    }
    a++;
  }
}

int main(void)
{
  ft_print_comb2();
}