#include "main.h"
/**
 * rev_string - function to reverse a string
 * @s: the string
 * Return: null
 */
void rev_string(char *s)
{
	int len, half, i;
	char ephe;

	i = 0;
	while (s[i])
	{
		i++;
	}

	len = 0;

	half = i / 2;

	while (half--)
	{
		ephe = s[i - len - 1];
		s[i - len - 1] = s[len];
		s[len] = ephe;
		len++;
	}
}
