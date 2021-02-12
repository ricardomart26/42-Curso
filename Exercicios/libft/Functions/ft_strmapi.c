#include "libft.h"

static int ft_strlen(char *str)
{
  int c;

  c = 0;
  while (*str)
  {
    c++;
    str++;
  }
  return (c);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  int c;
  char *str;
  int sizeStr;

  sizeStr = ft_strlen(s);
  str = (char *)malloc(sizeStr + 1);
  if (!str)
    return (NULL);
  c = 0;
  while (s[c])
  {
    str[c] = f(c, s[c]);
    c++;
  }
  str[c] = 0;
  return (str);
}