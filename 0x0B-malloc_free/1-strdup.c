#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a newly copied string
 * @str: thestring to copied
 * Return: the pointer to a newly copied string
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *p;

	if (str == 0)
		return (NULL);

	for ( ; str[size] != '\0'; size++)
		;
	p = malloc(sizeof(*str) * size);
	while (i < size)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
