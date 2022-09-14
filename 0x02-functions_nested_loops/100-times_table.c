#include "main.h"
#include <stdio.h>
/**
 * print_times_table - entry point
 * @n: the inputted element to generated its times table
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n < 150)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (b == 0)
				{
					putchar('0');
				}
				else if (c < 10)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar(c % 10 + '0');
				}
				else if (c >= 10 && c < 100)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar((c / 10) % 10 + '0');
					putchar(c % 10 + '0');
				}
				else if (c >= 100 && c < 1000)
				{
					putchar(',');
					putchar(' ');
					putchar(c / 100 + '0');
					putchar((c / 10) % 10 + '0');
					putchar(c % 10 + '0');
				}
			}
			putchar('\n');
		}

	}
}
