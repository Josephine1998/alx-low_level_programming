#include "main.h"
int sum_multiples(int n)
/**
 *sum_multiples - prints the sum of all multiples of 3 or 5 below
 *Return sun
 */
{
	int sum = 0;
	
	for (int i = 0; i < n; i++) 
	{
		if (i % 3 == 0 || i % 5 == 0) 
		{
			sum += i;
		}
	}
	return (sum);
}
