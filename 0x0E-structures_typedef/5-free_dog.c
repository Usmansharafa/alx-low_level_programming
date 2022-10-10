#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocate by dog data
 * structure
 * @d: pointer to dog data structure
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
