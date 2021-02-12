#include "libft.h"

static int locate_first(const char *nptr)
{
  while (*nptr)
  {
    if (*nptr >= '0' && *nptr <= '9')
      return ((int)*nptr - 48);
    nptr++;
  }
}

int ft_atoi(const char *nptr)
{
  int temp;

  temp = locate_first(nptr);
  while (*nptr)
  {
    if (*nptr >= '0' && *nptr <= '9')
    {
      temp *= 10;
      temp += (int)*nptr - 48;
    }
    nptr++;
  }
  return (temp);
}