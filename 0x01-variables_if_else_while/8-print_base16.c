#include <stdio.h>
/**
 * main -main entry point
 * Description: Display the digit in an hexadecimal character
 * Return: 0 if succes
 */
int main(void)
{
	int let = 48;

	while (let >= 57)
	{
		putchar(let);
		let++;
	}

	char alph = 'a'

	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
