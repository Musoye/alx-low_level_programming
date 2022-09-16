#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	long int prime = 612852475143;
	long int i = prime;
	long int j = 2;

	while (i != j)
	{
		if (i % j == 0)
		{
			i = i / j;
		}
		else
		{
			j++;
		}
	}
	printf("%li\n", j);

	return (0);
}
