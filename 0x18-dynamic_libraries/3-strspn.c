#include "main.h"
/**
 * _strspn - return number of bytes from accept in s
 * @s: the string
 * @accept: the accept
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		b = a;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				a++;
			}
			j++;
		}
		if (b == a)
		{
			break;
		}
		i++;
	}
	return (a);
}
