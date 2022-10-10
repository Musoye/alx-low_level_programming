#include <stdio.h>
#include "dog.h"

/**
 * new_dog - fuction creates new struct
 * @name: string
 * @age: float
 * @owner: string
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (*new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
}
