#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - multiply two numbers
 * @argc: the number of argument
 * @argv: the argument vector
 * Return: 0 always
 */
int main(argc, char *argv[])

	int a, b;

	if (argc != 3)
	{
		_putchar("Error\n");
		exit(98);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%lu\n", a * b);
	}
	return (0);
}
