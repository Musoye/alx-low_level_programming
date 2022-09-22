#include "main.h"
/**
 * print_number - it prints number
 * @n: the integer to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -a;
	}
	if ((a / 10) > 0)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
