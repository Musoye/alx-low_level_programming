#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string in reverse
 * @s: the string
 * Return: null
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
		s++
	}

	while (a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
