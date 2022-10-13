#include <stdarg.h>
/**
 * sum_them_all - functions that takes unrevocked number of arguments
 * and sum them
 * @n: the first argument
 * Return: sum and 0 if n is o
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
}
