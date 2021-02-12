#include "libft.h"

static int ft_strlen(char *str)
{
  int c;

  c = 0;
  while (str[c] != '\0')
    c++;

  return (c);
}

char *ft_strdup(const char *s)
{
  char *dup;
  int size;

  size = ft_strlen((char *)s);
  dup = (char *)malloc(size + 1);
  if (!dup)
    return (NULL);
  while (*s)
  {
    dup = (char *)s;
    s++;
    dup++;
  }
  return (dup - size);
}