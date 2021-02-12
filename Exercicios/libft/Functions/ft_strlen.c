#include "libft.h"

int ft_strlen(char *str)
{
  char str[10] = "A bruna e estupida";
  int c; 
  c = 0;
  while (str[c] != '\0')
    c++;

  return (c);
}
