#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory that was allocated by malloc
 * @d: pointer to dog_t *d
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
