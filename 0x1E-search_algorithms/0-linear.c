#include "search_algos.h"
/**
 * linear_search - linear search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: the value searching for
 * Return: the index else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (a < size)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);
		}
		a++;
	}
	return (-1);
}
