#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - to multiply 2 CLD arguments
 * @argc: the length of the command line argument
 * @argv: the array of string of command line argument
 * Return: 0 if success and 1 if the argument is not 3
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
