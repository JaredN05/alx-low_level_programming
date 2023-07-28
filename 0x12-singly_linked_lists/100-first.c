#include <stdio.h>

/*
 * Task: 5. The Hare and the Tortoise
 * Creator: Jared Naicker
 */

void first(void) __attribute__ ((constructor));

/**
  * first - ...
  *
  * Return: Nothing back
  */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
