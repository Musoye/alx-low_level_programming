#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description: Display the english alphabet 10 times
 * in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int num, let;

	for (num = 0; num <= 9; num++)
	{
		let = 'a';

		while (let <= 'z')
		{
			_putchar(let);
			let++;
		}
	}
	_putchar('\n');
}
