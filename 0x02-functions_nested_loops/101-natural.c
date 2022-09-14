#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int num;

	int sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum = sum + num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
