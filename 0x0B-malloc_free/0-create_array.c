#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - Create the array
 * @size: the number of the array you want to create
 * @c: the integer in the array
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p = malloc(size * sizeof(char));

	if (size == 0 || p == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
