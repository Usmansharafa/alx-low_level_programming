#include "dog.h"

/**
 * init_dog - Initializes the dog data structure
 * @d: pointer to a dog data structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
