#include "libft.h"

void ft_bzero(void *s, size_t n)
{
  int c;
  char *temp;

  c = 0;
  temp = (char *)s;
  while (c++ < n)
    temp[c] = '\0';
}