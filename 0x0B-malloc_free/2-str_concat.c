#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenate the two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the concatenated string and the sebtinel character
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, c = 0;
	int size1 = 0, size2 = 0;
	char *p;

	if (s1 == 0)
		s1 = '\0';
	if (s2 == 0)
		s2 = '\0';
	for ( ; s1[size1] != '\0'; size1++)
		;
	for ( ; s2[size2] != '\0'; size2++)
		;
	c = size1 + size2;
	p = malloc((sizeof(char) * c) + 1);
	if (p == 0)
		return (NULL);
	for ( ; a <= c; a++)
	{
		if (a < size1)
			p[a] = s1[a];
		else
			p[a] = s2[a - size1];
	}
	p[a] = '\0';
	return (p);
}
