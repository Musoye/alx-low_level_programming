#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long int sum;
	unsigned long int a = 1;
	unsigned long int b = 2;
	int count = 0;

	printf("%li, ", a);
	printf("%li, ", b);

	while (count <= 95)
	{
		if (count == 95)
		{
			printf("%li\n", sum);
			break;
		}
		sum = a + b;
		printf("%li, ", sum);
		a = b;
		b = sum;
		count++;
	}
	return (0);
}
