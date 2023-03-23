#include <stdlib.h>
#include "dog.h"
/* All my headers goes here */

/**
 * free_dog - frees dog
 * @d: pointer to dog to free
 * return: void
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
