#include <stdio.h>
/**
 * main - main entry point
 * Description: The code to list all alphabets except q and e
 *
 * Return: 0 if sucess
 */
int main(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		if (let == 'q' || let == 'e')
			putchar(c);

		c++;
	}
	putchar('\n');
	return (0);
}
