#include "libft.h"

/* Esta função copia n bytes da area de memoria do src para a area de    memoria do dst, se o dst sobreposser-se ao src o comportamento é undefined, e se tal acontecer deve ser utilizado o memmove, esta função retorna o valor original de dst
*/
void *ft_memcpy(void *dest, const void *src, size_t n)
{
  size_t c;
  char *d;
  char *s;

  c = 0;
  d = (char *)dest;
  s = (char *)src;

  while (c++ < n)
    d[c] = s[c];

  return (dest);
}