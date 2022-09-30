#include "main.h"
/**
 * _isalpha - entry point
 * @c: input formal parameter to check
 * Description: Check whether inputted value letter c is a letter
 * Return: 1 if success and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
