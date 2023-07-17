#include <stdlib.h>
#include "dog.h"

/*
 * Task: 5. How many legs does a dog have
 * Creator: Jared Naicker
 */

/**
  * free_dog - ...
  * @d: ...
  *
  * Return: ...
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
