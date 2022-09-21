#include "main.h"
#include <stdio.h>
/**
 * puts_half - print ultimate part of a string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int half, n;

	while (str[len])
	{
		len++;
	}
	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (half = n; half < len; half++)
	{
		putchar(str[half]);
	}
	putchar('\n');
}
