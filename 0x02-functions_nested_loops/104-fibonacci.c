#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, separated by a comma and a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k;
	unsigned long int num1, num2, num3;

	num1 = 1;
	num2 = 2;

	printf("%lu, %lu, ", num1, num2);
	for (i = 3; i <= 98; i++)
	{
		k = num1 + num2;
		num3 = num2 + k;
		num1 = k;
		num2 = num3;

		if (i != 98)
		{
			printf("%lu, ", k);
		}
		else
		{
			printf("%lu", k);
		}
	}
	printf("\n");
	return (0);
}
