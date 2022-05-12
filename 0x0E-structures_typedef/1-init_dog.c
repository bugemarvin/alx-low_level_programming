#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - function to initialize dog varialbels
  * @d: struct for dog variables
  * @name: The dogs name.
  * @age: The dogs age
  * @owner: the owner name for the dog.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
