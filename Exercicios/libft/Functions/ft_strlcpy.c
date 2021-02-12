#include "libft.h"

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
  unsigned int i;
  unsigned int c;

  c = 0;
  i = 0;
  while (src[c] != '\0')
    c++;
  if (size != 0)
  {
    while (src[i] != '\0' && i < (size - 1))
    {
      dest[i] = src[i];
      i++;
    }
    dest[i] = '\0';
  }
  return (c);
}