#include "main.h"

/*
 * Task: 4. 100
 * Creator: Jared Naicker
 */

/**
  * clear_bit - Code sets the value of a bit to 0
  * @n: The number to change
  * @index: The index in the number to change
  *
  * Return: 1 if it success, or -1 if fails
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
