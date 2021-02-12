// Cria uma função que divide "a" e "b" e guarda o resultado no pointer div, e guarda o resto (%) no mod

#include <unistd.h>

void ft_div_remainder(int a, int b, int *div, int *remainder)
{
  *div = a / b;
  *remainder = a % b;
}

int main(void)
{
  int a;
  int b;
  int div;
  int remainder;

  ft_div_remainder(&a, &b, &div, &remainder);
  write(1, &remainder, 1);
  write(1, &remainder, 1);
}