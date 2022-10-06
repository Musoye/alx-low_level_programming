#include "main.h"
#include <stdlib.h>
char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - recreates calloc function
 * @nmemb: the number of elments
 * @size: the size of the member of the array
 * Return: return pointer to the allocate dmemory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == 0)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
