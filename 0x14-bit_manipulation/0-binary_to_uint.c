#include "main.h"
/**
 * binary_to_uint - binary to unsigned int
 * @b: the binary strng
 * Return: the decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i;
	unsigned int num, len;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i = i + 2)
	{
		num = b[i] -'0';
		if (num != 0 || num != 1)
		{
			return (0);
		}
		else
		{
			if (b[i + 1] != '\0')
				len = b[i + 1] - '0';
			if (i == 0)
			{
				sum += num;
			}
			sum *= 2;
			sum += len;
		}
	}
	return (sum);
}
