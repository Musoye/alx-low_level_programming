#include "main.h"
int is_prime(int n, int div);
/**
 * is_prime - check if it is prime
 * @div: denominator
 * @n: the given number
 * Return: whther is is prime
 */
int is_prime(int n, int div)
{
	if (div >= n && n > 1)
		return (1);
	else if (n % div == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (is_prime(n, div + 1));
}
/**
 * is_prime_number -check prime number
 * @n: the number to check
 * Return: 1 if true 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
