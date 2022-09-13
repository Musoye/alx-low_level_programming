#include "main.h"
/**
 * _islower - entry point
 * Description: check if an input is lower
 * @c: check inputted function
 * Return: 1 if it lower and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
