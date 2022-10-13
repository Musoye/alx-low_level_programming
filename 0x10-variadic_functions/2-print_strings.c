#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - Print string using variaic function
 * @separator: the separator
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	/**
	 * if (n == 0)
	 * exit(98);
	 */
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
