#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenation of string
 * @dest: the first string
 * @src: the second string
 * @n: the byte of src
 * Return: dest which is concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
