#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - free dog struct
 *
 * @d: struct being freed
 *
 * Return:
 **/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
