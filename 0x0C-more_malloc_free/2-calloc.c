#include "main.h"
#include <stdlib.h>
/**
 * _calloc - recreates calloc function
 * @nmemb: the number of elments
 * @size: the size of the member of the array
 * Return: return pointer to the allocate dmemory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = '0';
	return (p);
}
