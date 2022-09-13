#include "main.h"
/**
 * print_alphabet - entry point
 * Description: To wride a to z embedd it in a function
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		_putchar(let);
	}
	_putchar('\n');
}
