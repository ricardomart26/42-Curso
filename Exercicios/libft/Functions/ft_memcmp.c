#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  int c;
  unsigned char *src1;
  unsigned char *src2;
  int len;

  c = -1;
  src1 = (unsigned char *)s1;
  src2 = (unsigned char *)s2;
  while (c++ < n)
    len += src1[c] - src2[c];
  return (len);
}