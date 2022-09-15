#include "main.h"
#include <stdio.h>

/**
 * print_numbers - entry of 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int let;

	for (let = 48; let < 58; let++)
	{
		putchar(let);
	}
	putchar('\n');
}
