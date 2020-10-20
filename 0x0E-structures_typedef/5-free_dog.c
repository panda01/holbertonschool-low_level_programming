#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the dog old yeller style
 * @d: Old Yeller
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
