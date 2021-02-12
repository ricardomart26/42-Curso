#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
  int c;
  char *d;
  char *s;

  c = 0;
  d = (char *)dest;
  s = (char *)src;

  while (c < n)
  {
    d[c] = s[c];
    if (s[c] == (char)c)
      return ((char *)dest + c + 1);
    c++;
  }
  return (NULL);
}