#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - entry point
 * Desc: a function that frees dogs
 * @d: struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
