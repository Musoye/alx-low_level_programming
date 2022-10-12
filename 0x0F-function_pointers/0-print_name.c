#include <stdlib.h>
#include "main.h"
/**
 * print_name - function to illustrate different function
 * through a callback function
 * @name: the name to work on
 * @f: the function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
