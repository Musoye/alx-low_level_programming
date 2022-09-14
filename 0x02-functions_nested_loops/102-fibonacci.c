#include <stdio.h>
/**
 * main -main entry point
 * Return: 0 if succesful
 */
int main(void)
{
	unsigned int a = 1;
	unsigned int b = 2;
	int count = 0;
	int sum;

	while (count <= 49)
	{
		if (count == 49)
		{
			sum = a + b;
			printf("%u\n", sum);
			break;
		}
		sum = a + b;
		printf("%u, ", sum)
		a = b;
		b = sum;
		count++;
	}
	return (0);
}
