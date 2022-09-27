#include "main.h"
/**
 * @*_strchr - function to check char in string
 * @s: the string
 * @c: the character
 * Return: s where the found and NUlL if not
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

		i++;
	}

	if (c == '\0')
		return (s + i);
	return (NULL);
}
