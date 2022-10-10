#include "dog.h"

/**
 * print_dog - Prints a dog data structure
 * @d: Pointer to dog data structure
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
