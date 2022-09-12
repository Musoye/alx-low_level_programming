#include <stdio.h>
/**
 * main - main entry point
 * Description: This program will print the lowecase of
 * alphabets in reverse order
 * Return: 0 if successful
 */
int main(void)
{
	char llet;

	for (llet = 122; llet >= 97; llet--)
	{
		putchar(llet);
	}
	putchar('\n');
	return (0);
}
