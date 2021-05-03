#include <stdio.h>

char line(char **string)
{
	*string = "O joao e um banana";
}
void print(int *x)
{
	*x = 20;
}

int main(void)
{
	int x = 10;
	printf("x = %d", x);
	char *string;

	print(&x);
	line(&string);

	printf("x = %d", x);
	// printf("x = %d", x);
	// printf("x = %d", x);

}
