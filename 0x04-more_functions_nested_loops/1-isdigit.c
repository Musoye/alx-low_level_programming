#include <ctype.h>
#include "main.h"

/**
 * _isdigit - entry point to test if it is a digit
 * @c: the value to test
 * Return: 1 if successful and 0 if not
 */

int _isdigit(int c)
{
	int m = isdigit(c);

	if (m != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
