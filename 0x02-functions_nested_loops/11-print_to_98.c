#include "main.h"
/**
 * print_to_98 - entry point
 * Description; addition fron number n to 98 and print iy ou
 * @n: the input number
 * Return: null
 */
void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
			printf("%d", a);
	}
	else
	{
		for (a = n; a <= 98; a++)
			printf("%d", a);
	}
}
