#include "main.h"
#include <stdio.h>
/**
 * times_table -entry point
 * return: void
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			printf("%d", a * b);
			if (b < 9)
			{
				printf(",  ");
			}
		}
		printf("\n");
	}
}
