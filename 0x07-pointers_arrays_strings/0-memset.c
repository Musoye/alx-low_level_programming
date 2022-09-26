#include "main.h"
#include <stdio.h>
/**
 * @*_memset - function fills the first n bytes of the memory
 * @s: the pointer to the string
 * @b: the constant byte to be replaced with
 * @n: number of byte of memory to be fill with
 * Return: the string
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	for ( ; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
