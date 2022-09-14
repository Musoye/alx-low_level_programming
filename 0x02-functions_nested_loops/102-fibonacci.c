#include <stdio.h>
/**
 * main -main entry point
 * Return: 0 if succesful
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	int count = 0;
	long int sum;

	printf("%li, ", a);
	printf("%li, ", b);

	while (count <= 47)
	{
		if (count == 47)
		{
			sum = a + b;
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
