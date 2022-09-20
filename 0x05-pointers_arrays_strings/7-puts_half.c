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
	int half;

	while (str[len])
	{
		len++;
	}

	for (half = len / 2; half < len; half++)
	{
		putchar(str[half]);
	}
	putchar('\n');
}
