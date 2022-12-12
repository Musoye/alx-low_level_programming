#include <ctype.h>
#include "main.h"

/**
 * _isupper - entry point to test for uppercase character
 * @c: the character to check
 * Return: 1 if success 0 otherwise
 */

int _isupper(int c)
{
	int m = isupper(c);

	if (m != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
