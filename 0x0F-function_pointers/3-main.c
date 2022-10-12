#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - performs different ops on numbers based on input
* @argc: number of arguments
* @argv: array of arguments
* Return: void
*/

int main(int argc, char *argv[])
{
	int a, b, i, (*n)(int, int);
	char *s;
	
	printf("%s",argv[1]);
	if (argc > 0)
	{
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	
	n = (*get_op_func)(s);
	i = (*n)(a, b);

	
	printf("%d\n", i);
	}
	

	return (0);

}
