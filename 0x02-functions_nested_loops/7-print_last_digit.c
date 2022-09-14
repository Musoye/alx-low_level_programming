#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - entry point
 * Description: print the last digit of a number
 * @d: the number to check the  last digit
 * Return: m if succesful
 */
int print_last_digit(int d)
{
	int m = d % 10;

	if (d < 0)
		m = -m;
	putchar(m + '0');
	return (m);
}
