#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char *s;

	s = str_concat(NULL, NULL);
	/**s = str_concat("Betty ", "Holberton");*/
	/**s = _strdup("ALX SE");*/
	if (s == NULL)
	{
		printf("unallocated memory");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
