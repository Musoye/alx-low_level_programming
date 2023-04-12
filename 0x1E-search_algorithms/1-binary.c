#include "search_algos.h"
/**
 * binary_search - binary search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: the value
 * Return: the index else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t a, i = 0;
	size_t R = size;
	size_t m = R;

	if (array == NULL)
	{
		return (-1);
	}
	while (a < size)
	{
		printf("Searching in array: ");
		for (i = a; i < R; i++)
		{
			if (i == R - 1)
			{
				printf("%d\n", array[i]);
			}
			else 
			{
				printf("%d, ", array[i]);
			}
		}
		m = (a + R) / 2;
		if (array[m] < value)
		{
			a = m + 1;
		}
		else if (array[m] > value)
		{
			R = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
