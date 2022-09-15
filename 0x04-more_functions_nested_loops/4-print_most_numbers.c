#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - entry of 0 to 9
 * Return: void
 */

void print_most_numbers(void)
{
	int let;

	for (let = 48; let < 58; let++)
	{
		if (let == 50 || let == 52)
		{
			continue;
		}
		putchar(let);
	}
	putchar('\n');
}
