#include "main.h"
#include <string.h>
/**
 * *_strcat - concatenation of string
 * @dest: the first string
 * @src: the second string
 * Return: dest which is concatenated string
 */
char *_strcat(char *dest, char *src)
{
	size_t len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	return (dest);
}
