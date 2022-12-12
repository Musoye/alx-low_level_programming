#include "main.h"
#include <stdio.h>
/**
 * @*_memset - function fills the first n bytes of the memory
 * @s: the pointer to the string
 * @b: the constant byte to be replaced with
 * @n: number of byte of memory to be fill with
 * Return: the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
