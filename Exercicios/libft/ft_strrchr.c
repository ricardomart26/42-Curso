#include <stdio.h>
#include <stdlib.h>

char *ft_strrchr(char *s, int c)
{
  int size;
  char *ptr;

  size = 0;
  while (s[size])
    size++;
  ptr = (char *)malloc(sizeof(char *) * 9);
  ptr = s;
  char a = (char)c;
  while (0 < size)
  {
    if (ptr == a)
      return (s + size);
    size--;
  }
}

int main(void)
{
  char *str = "teste 123";
  char *ptr;
  int c = 116;

  ptr = ft_strrchr(str, 't');
  printf("%s\n", ptr);

  return (0);
}