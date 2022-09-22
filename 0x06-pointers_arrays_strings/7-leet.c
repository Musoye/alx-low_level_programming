#include "main.h"
/**
 * leet - encode in 1337 format
 * @s: the string
 * Return: the string
 */
char *leet(char *s)
{
	char *rep;

	rep = s;

	while (*s != '\0')
	{
		if (*s == 'a' || *s == 'A')
			*s = 4;
		else if (*s == 'e' || *s == 'E')
			*s = 3;
		else if (*s == 'o' || *s == 'O')
			*s = 0;
		else if (*s == 't' || *s == 'T')
			*s = 7;
		else if (*s == 'l' || *s == 'L')
			*s = 1;
		s++;
	}
	s = aux;
	return (s);
}
