#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - create a 2D array
 * @width: the row
 * @height: the column
 * Return:pointer to the string
 */
int **alloc_grid(int width, int height)
{
	int a, b = 0;
	int **array;

	array = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || array == 0)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(sizeof(int) * width);
		if (array[a] == 0)
		{
			while (a--)
				free(array[a]);
			free(array);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			array[a][b] = 0;
	}
	return (array);
}
