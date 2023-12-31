#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/*
 * Task: 2. A dog will teach you unconditional love.
 * Creator: Jared Naicker
 */

/**
  * print_dog - Prints all the data of a dog
  * @d: A dog structure
  *
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
