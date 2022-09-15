#include "main.h"

/**
 * print_numbers - entry of 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int let;

	for (let = 48; let <= 58; let++)
	{
		_putchar(let);
	}
	_putchar('\n');
}
