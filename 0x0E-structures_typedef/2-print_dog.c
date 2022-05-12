#include <stdio.h>
#include "dog.h"

/**
  * print_dog - function that prints the dog struct.
  * @d: pointer for the dog struct
  *
  * Return: NULL
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)\n");
	}
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
