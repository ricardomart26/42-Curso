// Cria uma finçao que troca dois valores que os adereços sao introduzidos como parametros

#include <stdio.h>
void ft_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

int main(void)
{
  int a = 25;
  int b = 10;

  ft_swap(&a, &b);
  printf(" a = %i ;  b = %i ;", a, b);
}