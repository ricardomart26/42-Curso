#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  char *str;
  int c;
  int j;

  str = (char *)malloc(sizeof(*s1) + sizeof(*s2) + 1);
  if (!str)
    return NULL;
  c = 0;
  while (s1[c] != '\0')
  {
    str[c] = s1[c];
    c++;
  }
  j = 0;
  while (s2[j] != '\0')
  {
    str[c] = s2[j];
    c++;
    j++;
  }
  str[c] = 0;
  return (str);
}
