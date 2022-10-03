#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character
 * Return: 1 on succes and -1 if else
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
