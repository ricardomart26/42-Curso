#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void modify(char **double_pointer)
{
  //define a char pointer
  char *pointer = malloc(5 * sizeof(char));
  strcpy(pointer, "test");
  printf("%s\n", pointer); //prints test

  *double_pointer = pointer;
  printf("%s\n", *double_pointer); //prints test
}

int main()
{
  //pointer to a pointer
  char *double_pointer = '\0';
  modify(&double_pointer);
  printf("%s\n", double_pointer); // seg. fault
}