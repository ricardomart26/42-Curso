#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
  int c;
  char *d;
  char *s;
  char *temp_array;

  c = 0;
  d = (char *)dest;
  s = (char *)src;

  while (c < n)
  {
    temp_array[c] = s[c];
    c++;
  }
  c = 0;
  while (temp_array[c++])
    d[c] = temp_array[c];

  return (d);
}