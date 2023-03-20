#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - function frees up memory allocated
 * @d: pointer where memory was allocated
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
