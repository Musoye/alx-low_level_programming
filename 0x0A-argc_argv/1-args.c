#include "main.h"
#include <stdio.h>
/**
 * main - to print number of line argument
 * @argc: the number of line argument
 * @argv: array of string of cl argument
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return(0);
}
