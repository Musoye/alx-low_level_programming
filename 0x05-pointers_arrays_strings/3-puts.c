#include "main.h"
#include <stdio.h>
/**
 * _puts - print out string
 * @str: the string
 * Return: void
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
