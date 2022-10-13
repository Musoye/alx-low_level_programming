#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - lengths of a string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _strcopy - copy string to one another
 * @dest: the copied string
 * @src: the string to copy
 * Return: dest
 */
char *_strcopy(char *dest, char *src)
{
	int ind = 0;

	for ( ; src[ind] != '\0'; ind++)
	{
		dest[ind] = src[ind];
	}
	dest[ind] = '\0';
	return (dest);
}
/**
 * new_dog - to create new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdogi;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	newdogi = malloc(sizeof(dog_t));
	if (newdogi == NULL)
	{
		free(newdogi);
		return (NULL);
	}
	newdogi->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (newdogi->name == NULL)
	{
		free(newdogi);
		return (NULL);
	}
	newdogi->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (newdogi->owner == NULL)
	{
		free(newdogi->name);
		free(newdogi);
		return (NULL);
	}
	newdogi->name = _strcopy(newdogi->name, name);
	newdogi->age = age;
	newdogi->owner = _strcopy(newdogi->owner, owner);
	return (newdogi);
}
