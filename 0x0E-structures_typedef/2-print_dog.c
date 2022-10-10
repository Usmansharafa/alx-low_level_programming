#include "dog.h"

/**
 * print_dog - Prints a dog data structure
 * @d: Pointer to dog data structure
 */
void print_dog(struct dog *d)
{
	d->name != NULL ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);
	d->owner != NULL ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil),\n");
}
