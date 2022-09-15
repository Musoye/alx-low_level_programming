#include "main.h"

/**
 * print_diagonal - entry point
 * Description: to print diagonal
 * @n: input number of diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	int dig = 0;
	int space;

	while (dig < n && n > 0)
	{
		space = 0;
		while (space < dig)
		{
			_putchar(' ');
			space++;
		}
		_putchar('\\');
		_putchar('\n');
		dig++;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
