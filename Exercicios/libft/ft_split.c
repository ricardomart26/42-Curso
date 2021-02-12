#include <stdio.h>
#include <stdlib.h>

static int ft_cntwrd(char const *s, char c)
{
  unsigned int i;
  int cntr;

  i = 0;
  cntr = 0;
  while (s[i])
  {
    while (s[i] == c)
      i++;
    if (s[i] != '\0')
      cntr++;
    while (s[i] && (s[i] != c))
      i++;
  }
  return (cntr);
}
unsigned int ft_strlcpy(char *dest, char *src)
{
  unsigned int i;
  unsigned int c;

  c = 0;
  i = 0;
  while (src[c] != '\0')
    c++;

  while (src[i] != '\0' && i < (size - 1))
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';

  return (dest);
}

static char *ft_strndup(const char *s, size_t n)
{
  char *str;

  str = (char *)malloc(sizeof(char) * n + 1);
  if (str == NULL)
    return (NULL);
  str = ft_strlcpy(str, s, n);
  str[n] = '\0';
  return (str);
}

char **ft_strsplit(char const *s, char c)
{
  int i;
  int j;
  int k;
  char **tab;

  i = 0;
  k = 0;
  tab = (char **)malloc(sizeof(char *) * (ft_cntwrd(s, c)) + 1);
  if (tab == NULL)
    return (NULL);
  while (s[i])
  {
    while (s[i] == c)
      i++;
    j = i;
    while (s[i] && s[i] != c)
      i++;
    if (i > j)
    {
      tab[k] = ft_strndup(s + j, i - j);
      k++;
    }
  }
  tab[k] = NULL;
  return (tab);
}

int main()
{
  char **str;
  int x = 0;
  int y = 0;
  int count = 3;
  int i;

  str = ft_strsplit("O ricardo e o maior", 'r');
  printf("%d\n", count);
  printf("string = %s", str);
  while (y < count)
  {
    printf("string = %s", **str);
    str++;
    y++;
    printf("\n");
  }
}