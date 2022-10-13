#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers- function to print unrevocked number
 * of numbers
 * @separator: the separator between the numbers
 * @n:the number of numbers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	/**
	 * if (n == 0)
	 * exit(98);
	 */
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
