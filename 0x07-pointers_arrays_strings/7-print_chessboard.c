#include "main.h"
/**
 * print_chessboard - print inputted substring in an array
 * @a: input pointer
 * Return: Null
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	b = 0;
	c = 0;
	while (b < 64)
	{
		if (b % 8 == 0 && b != 0)
		{
			c = b;
			_putchar('\n');
		}
		_putchar(a[b / 8][b - c]);
		b++;
	}
	_putchar('\n');
}
