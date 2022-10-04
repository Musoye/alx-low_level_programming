#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_gri - create a 2D array
 * @width: the row
 * @height: the column
 * Return:pointer to the string
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **array;

	array = malloc(sizeof(int *) * width);

	if (width <= 0 || height <= 0 || array == 0)
		return (NULL);
	for (a = 0; a < width; a++)
		array[b] = malloc(sizeof(int) * height);
	for(a = 0; a < width; a++)
	{
		for (b = 0; b < height; b++)
			array[a][b] = 0;
	}
	return (array);
}
