#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free space  assign by malloc
 * @grid: the array
 * @height: the row
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	for ( ; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
