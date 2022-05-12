#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Description for dog.
  * @name: charcter name for dog.
  * @age: how old is the dog
  * @owner: the name of the dog owner.
  *
  * Return: Always 0.
  */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*
   * dog_t *new_dog(char *name, float age, char *owner);
   * void free_dog(dog_t *d);
*/
#endif
