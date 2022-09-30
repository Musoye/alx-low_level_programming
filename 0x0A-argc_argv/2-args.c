#include "main.h"
#include <stdio.h>
/**
 * main - to print the command line argumnet
 * @argc: the number of command line argument
 * @argv: the array of strings
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
