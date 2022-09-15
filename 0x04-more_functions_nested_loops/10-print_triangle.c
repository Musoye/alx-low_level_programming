#include "main.h"

/**
 * print_triangle - entry point to print a right angled triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int a = 1, b;

	while (a <= size && size > 0)
	{
		b = 0;
		while (b < size - 1)
		{
			_putchar(' ');
			b++;
		}
		b = 0;
		while (b < a)
		{
			_putchar("#");
			b++;
		}
		_putchar("\n");
		a++;
	}
	if (size <= 1)
	{
		_putchar("\n");
	}
}
