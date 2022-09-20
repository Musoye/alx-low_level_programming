#include "main.h"
/**
 * swap_int - it waps two integer
 * @a: the penultimate nteger to swap
 * @b: the ultimate integer to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
