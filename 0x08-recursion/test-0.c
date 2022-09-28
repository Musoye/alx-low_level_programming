#include "main.h"
int length(int num, char **s);
void print(int a, int i, char **s);

/**
 * length - length of the string
 * @s: the string
 * @num: the number to get the length of the string
 * Return: the number
 */
int length(int num, char **s)
{
	if (*s[num] == '\0')
		return (0);
	return (num + length(num + 1, &s[num + 1]));
}
/**
 * print - print the character
 * @a: the length of the string
 * @s: the string
 * @i: the length of the string
 * Return: null
 */
void print(int a, int i, char **s)
{
	_putchar(*s[a]);
	a++;
	if (a <= i)
		print(a, i, &s[a]);
}
/**
 * _puts_recursion - print as puts
 * @s: the string
 * Return: null
 */
void _puts_recursion(char *s)
{
	int b = 0, e = 0, d;

	d = length(b, &s);
	print(e, d, &s);
}
