#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long int sum;
	long int a = 1;
	long int b = 2;
	int count = 0;

	printf("%li, ", a);
	printf("%li, ", b);

	while (count <= 97)
	{
		if (count == 97)
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
