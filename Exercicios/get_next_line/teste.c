#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{
  FILE *fd;
  char buffer[2];
  char *temp;
  int size;

  fd = open("NewFile.txt", O_RDONLY);
  if (fd != NULL)
    printf("Ficheiro bem criado!\n\n");

  while (fd != EOF)
  {
    read(0, fd, 10);
  }
  return (0);
}