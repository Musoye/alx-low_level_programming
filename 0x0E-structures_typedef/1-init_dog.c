#include "dog.h"
/**
 * init_dog -> initializes a variable of type string
 * @d: the struct
 * @name: the name of the dog
 * @age: the age of the dogv
 * @owner: the owner pf the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
