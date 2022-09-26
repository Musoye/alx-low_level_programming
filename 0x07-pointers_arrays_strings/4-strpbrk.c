#include "main.h"
/**
 * @*_strpbrk - locate the first element in accept
 * @s: the string
 * @accept: the compare string
 * Return: pointer to the string if present and NULL if not
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
