#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("unallocated memory");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
