#include "main.h"

/**
 * print_triangle - entry point to print a right angled triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 1; b < (size - 1); b++)
		{
			_putchar(' ');
		}
		for (b--; b < size; b++)
		{
			_putchar('#');
		}
		if (a < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
