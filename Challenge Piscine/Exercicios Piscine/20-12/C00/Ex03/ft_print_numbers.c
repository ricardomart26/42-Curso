#include <unistd.h>

void ft_print_numbers(void)
{
  int c = 0;

  while (c <= 10)
  {
    write(1, &c, 1);
    c++;
  }
}