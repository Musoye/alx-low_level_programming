#include <unistd.h>
#include "main.h"

/**
 * _putchar - write character c to the stdout
 * @c: the characters to be print out
 * Return: 1 on succes, -1 if there is any error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
