#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
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

	if (n == 0)
		exit(0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (*separator != '\0')
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		else
		{
			printf("%d", va_arg(ap, int));
		}
	}
	putchar('\n');
}
