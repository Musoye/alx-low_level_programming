#include "main.h"
/**
 * _strlen - length of a string
 * @s: the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int num = 0;

	while (*s != '\0')
	{
		num++;
		s++;
	}
	return (num);
}
