#include "main.h"
/**
 * @*_memcpy - copy some memory area into another
 * @dest:the copied memiry address
 * @src: the original memoryv address to be copied
 * @n: the n bytes of addressses to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
