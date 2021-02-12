#include <stdio.h>

char ft_putstr(char *str)
{
  int c;

  c = 0;
  while (str[c] != '\0')
  {
    c++;
    return (str[c]);
  }
  return (0);
}

int main(void)
{
  printf("%c", ft_putstr("Hello"));
}