#include <unistd.h>

void ft_is_negative(void)
{
  int n = -10;

  if (n >= 0)
    write(1, "Positivo", 10);
  else
    write(1, "Negativo", 10);
}

int main(void)
{
  ft_is_negative();
}