#include "dog.h"

/**
 * print_dog - Prints a dog data structure
 * @d: Pointer to dog data structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name != NULL ? printf("%s\n", d->name) : printf("(nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: ")
		d->owner != NULL ? printf("%s\n", d->owner) : printf("(nil),\n");
	}
}
