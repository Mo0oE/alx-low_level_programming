#include "dog.h"

/**
 * free_dog - fu
 * @d: in
 * Description: none
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->owner)
			free(d->owner);
		if (d->name)
			free(d->name);
		free(d);
	}
}
