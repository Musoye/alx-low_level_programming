#include "main.h"
#include <stdio.h>
/**
 * puts2 - print even element
 * @str: the string
 * Return: null
 */
void puts2(char *str)
{
	int i, len = 0;

	i = 0;
	while (str[i])
	{
		len++;
		i++;
	}

	for (i = 0; i < len; i = i + 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
