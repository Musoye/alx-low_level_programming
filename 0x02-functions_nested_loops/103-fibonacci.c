#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: total sum of fibonacii number
 * that are divisible by 2
 * Return: 0
 */
int main(void)
{
	long int t_sum = 0;
	long int sum = 0;
	long int a = 0;
	long int b = 1;

	while (sum < 4000000)
	{
		sum = a + b;

		if (sum % 2 == 0)
		{
			t_sum = t_sum + sum;
		}
		a = b;
		b = sum;
	}
	printf("%li\n", t_sum);
	return (0);
}
