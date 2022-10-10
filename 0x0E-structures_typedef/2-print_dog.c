#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * print_dog - fuction used to print struct data
 * @d: structure pointer
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age <= 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %.6f\n", d->age);
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
