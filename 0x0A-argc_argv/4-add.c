#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int IsNumber(char *s);
/**
 * main - add the number pass into CLD
 * @argc: the number of CLD arguments
 * @argv: array of the string
 * Return: 0 if success and 1 if not aymbol or not digit
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (IsNumber(argv[i]) == 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * IsNumber: check the number
 * @s: the string
 * Return: 0 or 1
 */
int IsNumber(char *s)
{
	int c = 0;
	while (s[c] != '\0')
	{
		if (s[c] < '0' || s[c] > '9')
			return (1);
		c++;
	}
	return (0);
}
