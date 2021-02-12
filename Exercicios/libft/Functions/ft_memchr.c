#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
  int c;
  unsigned char *src;

  c = 0;
  src = (unsigned char *)s;

  while (c++ < n)
  {
    if (src[c] == (unsigned char *)c)
      return (src[c]);
    else
      return (NULL);
  }
}