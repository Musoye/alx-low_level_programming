#include "main.h"
/**
 * main - main  entry poin
 *
 * Return: 0 if succes
 */
int main(void)
{
	char printput[8] = "_putchar";
	int step;

	for (step = 0; step < 8; step++)
	{
		_putchar(printput[step]);
	}
	_putchar('\n');
	return (0);
}
