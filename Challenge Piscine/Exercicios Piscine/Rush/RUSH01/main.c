#include <stdio.h>

void validation(int x1, int y1, int x2, int y2, int size_x, int size_y)
{
  if (x1 >= x2)
  {
    printf("x1 is bigger than x2...");
  }
  else if (x2 > size_x)
  {
    printf("x2 is bigger then size of the array...");
    return (0);
  }
  else if (y1 >= y2)
  {
    printf("y1 is bigger then y2...");
    return (0);
  }
}

void ft_position_2D(int x1, int y1, int x2, int y2, int size_x, int size_y, int array[size_x][size_y])
{
  int x;
  int y;

  if (!validation)
    break;
  x = 1;
  while (x < size_y)
  {
    printf("Values on array[%d][%d]: %d\n", x1, y1, array[x1][y1]);
    y1++;
    x++;
  }
  x1++;
  while (x1 < x2)
  {
    y1 = 0;
    while (y1 < size_y - 1)
    {
      printf("Values on array[%d][%d]: %d\n", x1, y1, array[x1][y1]);
      y1++;
    }
    x1++;
    if (x1 == x2)
    {
      y1 = 0;
      while (y1 < size_y - 1)
      {
        printf("Values on array[%d][%d]: %d\n", x1, y1, array[x1][y1]);
        y1++;
      }
      break;
    }
  }
  // Consigo destingir o tamanho dentro da função?
}
int main(int argc, char **argv)
{
  int matriz[4][4];
  int matrix[4][4] = {
      {1, 2, 3, 4},
      {1, 2, 3, 4},
      {1, 2, 3, 4},
      {1, 2, 3, 4}};
  int x;
  int counter;
  int size;
  int y;

  /****************************************************************************************************************************/
  // Testar função para escrever de um ponto de uma matrix ate outra

  ft_position_2D(2, 3, 3, 2, 4, 4, matrix);
  /****************************************************************************************************************************/

  counter = 0;
  size = 4;
  while (size > counter)
  {
    x = 0;
    while (size > x++)
    {
      printf("%d ", x);
    }
    printf("\n");
    counter++;
  }

  x = -1;
  while (x++ < size - 1)
  {
    y = -1;
    while (y++ < size - 1)
      printf("Number in matrix[%d][%d]: %d\n", x, y, matrix[x][y]);
  }

  x = -1;
  while (x++ < size - 1)
  {
    y = -1;
    while (y++ < size - 1)
    {
      printf("Put the number: ");
      scanf("%d", &matriz[x][y]);
    }
  }
  x = -1;
  while (x++ < size - 1)
  {
    y = -1;
    while (y++ < size - 1)
      printf("Number in matrix[%d][%d]: %d\n", x, y, matriz[x][y]);
  }
  return (0);
}