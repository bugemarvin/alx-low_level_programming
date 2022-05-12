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
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL ? d->name : "(nil)"));
		printf("Age: %f\n", (d->age > 0 ? d->age : (0)));
		printf("Owner: %s\n", (d->owner != NULL ? d->owner : "(nil)"));
	}
	if (d == NULL)
	{
		exit(98);
	}
}
