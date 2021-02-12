#include "libft.h"
#include <stdbool.h>

static bool less_32(int c)
{
  if (c > 32)
    return (1);
  else
    return (0);
}

static bool bigger_126(int c)
{
  if (c < 127)
    return (1);
  else
    return (0);
}

int ft_isprint(int c)
{

  if (!(less_32 && bigger_126))
    return (1);
  else
    return (0);
}