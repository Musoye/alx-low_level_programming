#include "main.h"
/**
 * print_sign - entry point
 * Description: To check the categories in which a number fall
 * @n: The number to check its range
 * Return: 1 if >1 and  0 if =0 and -1 if <1
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar9('-');
		return (-1);
	}
}
