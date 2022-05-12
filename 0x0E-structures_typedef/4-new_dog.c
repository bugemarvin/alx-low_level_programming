#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - length of a string
 * @s: string
 * Return: length
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_length, owner_length;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}

	name_length = _strlen(name);
	d->name = malloc(sizeof(char) * name_length + 1);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = _strcpy(d->name, name);


	owner_length = _strlen(owner);
	d->owner = malloc(sizeof(char) * owner_length + 1);

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = _strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
