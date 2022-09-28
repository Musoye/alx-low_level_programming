#include "main.h"
/**
 * factorial - peint factorial
 * @n: the number to print its factorial
 * Return: the factorial result
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n <= 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
