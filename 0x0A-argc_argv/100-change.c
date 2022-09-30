#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int IsNumber(char *s);
/**
 * IsNumber - check the number
 * @s: the string contain the number
 * Return: 0 on success and 1 otherwise
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
/**
 * main - check minimal numal of coins for change
 * @argc: the number of argument on the command line
 * @argv: the array contain the string
 * Return: 0 and 1 othersise
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, d = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (IsNumber(argv[1]) == 0)
	{
		a = atoi(argv[1]);
		while (a > 0 && b <= 4)
		{
			if (a >= coins[b])
			{
				a -= coins[b];
				d++;
			}
			else
			{
				b++;
			}
		}
	}
	printf("%d\n", d);

	return (0);
}
