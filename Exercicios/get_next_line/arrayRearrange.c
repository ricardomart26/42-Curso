#include <stdio.h>

int swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void printArray(int *array, int size)
{
  int c;

  c = 0;
  while (c < size)
  {
    printf("New array : %d", array[c]);
    c++;
  }
}
int main()
{
  int array[11] = {-4, 8, -5, -9, 7, 1, -21, -11, 19};
  int i;
  int c;

  while (i < 11)
  {
    if (i % 2 == 1)
    {
      while (array[i] < array[i + 1])
      {
        swap(&array[i], &array[i + 1]);
        i++;
        c++;
      }
    }
    else if (i % 2 == 0)
    {
      c = 0;
      while (array[i] > array[i + 1])
      {
        swap(&array[i], &array[i + 1]);
        i++;
        c++;
      }
      i -= c;
    }
  }
  printArray(array, 11);
}