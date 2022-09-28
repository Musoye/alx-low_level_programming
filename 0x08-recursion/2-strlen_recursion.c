#include "main.h"
/**
 * _strlen_recursion - length of a string using recursion
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int m = 0;

	if (*s != '\0')
	{
		m += _strlen_recursion(s + 1) + 1;
	}
	return (m);
}
