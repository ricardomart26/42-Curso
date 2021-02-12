#include <unistd.h>

void ft_putchar(char c) // Recebe um char
{
  write(1, &c, 1); // E escreve o
}
