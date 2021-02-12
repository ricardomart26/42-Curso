#include <unistd.h>
#include <stdio.h>

void ft_combos(int n)
{
}

void ft_print_combn(int n)
{
  int a;
  int b;
  int c;

  a = '0' + 0;
  b = '0' + 0;
  c = '0' + 0;
  if (n == 1)
  {
    while (a <= '9')
    {
      write(1, &a, 1);
      a++;
    }
  }
  else if (n == 2)
  {
    while (b <= '9')
    {
      a = b + 1;
      while (a <= '9')
      {
        write(1, &b, 1);
        write(1, &a, 1);
        write(1, " ", 1);
        a++;
      }
      b++;
    }
  }
  else if (n == 3)
  {
    while (c++ <= '7')
    {
      b = c;
      while (b++ <= '8')
      {
        a = c;
        while (a++ <= '9')
        {
          write(1, &c, 1);
          write(1, &b, 1);
          write(1, &a, 1);
          write(1, ", ", 2);
        }
      }
    }
  }
}

int main(void)
{
  ft_print_combn(3);
}
