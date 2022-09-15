#include "main.h"
#include <stdio.h>

/**
 * more_numbers - entry more numbers
 * Return: 0
 */

void more_numbers(void)
{
	char n, c;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n < 15; n++)
		{
			c = n;
			if (n > 9)
			{
				putchar('1');
				c = n % 10;
			}
			putchar(c + '0');
		}
		putchar('\n');
		i++;
	}

}
