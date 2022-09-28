#include "main.h"
/**
 * _pow_recursion - calculate raise to power
 * @x: the base
 * @y: the power
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	int m;
	
	m = 0;
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, (y - 1)));
}
