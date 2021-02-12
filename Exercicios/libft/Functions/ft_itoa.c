#include "libft.h"

static int last_number(int n)
{
  if (n > 10)
  {
    n %= 10;
    return (n);
  }
  return (n);
}

static int count_unidades(int n, int unidades)
{
  while (n > 10)
  {
    n /= 10;
    unidades++;
  }
  unidades++;
  return (unidades);
}

char *ft_itoa(int n)
{
  char *str;
  int sizeStr;
  int temp;

  sizeStr = count_unidades(n, 0);
  temp = sizeStr;
  str = (char *)malloc(sizeof(char) * sizeStr);
  if (!str)
    return (0);

  while (0 < sizeStr)
  {
    str[sizeStr - 1] = last_number(n) + '0';
    n /= 10;
    sizeStr--;
  }
  str[temp] = '\0';
  return (str);
}