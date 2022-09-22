#include "main.h"
/**
 * *string_toupper - change string to uppercase
 * @s: the string
 * Return: the capitalize string
 */
char *string_toupper(char *s)
{
	int i = 0;

	for ( ; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
