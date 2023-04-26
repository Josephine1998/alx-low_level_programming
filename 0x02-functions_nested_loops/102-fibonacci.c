#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, n = 50;
	long int a = 1, b = 2, c;

	printf("%ld, %ld", a, b);
	for (i = 3; i <= n; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
