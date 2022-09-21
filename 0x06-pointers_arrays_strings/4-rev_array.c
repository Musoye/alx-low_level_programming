#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse an array
 * @a: the array to be reversed
 * @n: he number of element in the array
 * Return: null
 */
void reverse_array(int *a, int n)
{
	int sample, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		sample = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = sample;
	}
}
