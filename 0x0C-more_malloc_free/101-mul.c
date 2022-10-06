#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - multiply two numbers
 * @argc: the number of argument
 * @argv: the argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}
