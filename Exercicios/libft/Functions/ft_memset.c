#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
  char *temp;

  temp = (char *)s;
  while (n > 0)
  {
    temp[n - 1] = c; // Utilizamos o - 1 para nao retirar o '/0'
    n--;
  }
  return (s);
}
