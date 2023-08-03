#include "main.h"

/*
 * Task: 3. 11
 * Creator: Jared Naicker
 */

/**
  * set_bit - Sets the value of a bit to 1 at a given index
  * @n: The number to change
  * @index: The index in the number to change
  *
  * Return: 1 if success, or -1 if it fails
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
