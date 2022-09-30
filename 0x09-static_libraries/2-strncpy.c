#include "main.h"
/**
 * _strncpy - to print a number of string iin another
 * @dest: the return copied string
 * @src: the string to be copied from
 * @n: the number of string
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for ( ; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
