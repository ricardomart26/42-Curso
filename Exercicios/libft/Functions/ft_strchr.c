#include "libft.h"

char *ft_strchr(const char *s, int c)
{
  char *src;

  while ((char *)s)
  {
    if ((char *)s == (char *)c)
    {
      src = (char *)s;
      return (src);
    }
    s++;
  }
}
