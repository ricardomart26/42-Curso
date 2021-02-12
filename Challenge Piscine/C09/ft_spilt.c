#include <stdio.h>
#include <stdlib.h>

char *ft_strstr(char *str, char to_find)
{
  int i;
  int j;
  int count;

  i = 0;
  if (to_find == '\0')
    return (0);
  while (str[i] != '\0')
  {
    j = 0;
    while (str[i + j] == to_find[j])
    {
      if (to_find[j + 1] == '\0')
      {
        count = i--;
        return (count);
      }
      j++;
    }
    i++;
  }
  return (0);
}

char ft_strncpy(char dest, char *src, unsigned int n)
{
  unsigned int i;

  i = 0;
  while (i < n && src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  while (i < n)
  {
    dest[i] = '\0';
    i++;
  }
  return (dest);
}

char ft_split(char *str, char *charset)
{
  char dest;
}

int main()
{
}