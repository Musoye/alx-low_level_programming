#include "main.h"
#include <stdlib.h>
unsigned int length(char *s);
/**
 * length - length of a string
 * @s: the pointer to the string
 * Return: the length(int)
 */
unsigned int length(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * string_nconcat - to concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n:the n-byte from the second string
 * Return: the pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n < length(s2))
		p = malloc(length(s1) + n * sizeof(char) + 1);
	else
		p = malloc(length(s1) + length(s2) + 1);
	if (p == 0)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		p[a] = s1[a];
	for (b = 0; s2[b] != '\0' && b < n; a++, b++)
		p[a] = s2[b];
	p[a] = '\0';
	return (p);
}
