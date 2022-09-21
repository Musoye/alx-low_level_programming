#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - convert string to integer
 * @s: the string
 * Return: integer on succeful and 0 on failure
 */
int _atoi(char *s)
{
	unsigned int a = atoi(*s);

	if (a != 0)
		return (a);
	else
		return (0);
}
