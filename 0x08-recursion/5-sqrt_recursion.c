#include "main.h"
int square(int n, int num);
/**
 * square - check for square
 * @n: the number inputter
 * @num: at n started from 0
 * Return: int
 */
int square(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}
	else if (num * num < n)
	{
		return (square(n, num + 1));
	}
	else
		return (-1);
}
/**
 * _sqrt_recursion - the square root
 * @n: the square
 * Return:the square root
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
