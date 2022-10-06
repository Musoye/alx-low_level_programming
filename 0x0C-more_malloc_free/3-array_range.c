#include "main.h"
#include <stdlib.h>
/**
 * array_range - print a range of number inclusive
 * @min: minumun int
 * @max: maximum
 * Return: the pointer to the array
 */
int *array_range(int min, int max)
{
	int d, i;
	int *p;

	if (min > max)
		return (NULL);
	d = max - min + 1;
	p = malloc(sizeof(int) * d);
	if (p == 0)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
		p[i] = min;
	return (p);
}
