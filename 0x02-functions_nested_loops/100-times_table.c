#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the size of the times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				_putchar('0');
			else if (i * j < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + i * j);
			}
			else if (i * j < 100)
			{
				_putchar(' ');
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
			}
			else
			{
				_putchar('0' + (i * j) / 100);
				_putchar('0' + ((i * j) / 10) % 10);
				_putchar('0' + (i * j) % 10);
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
