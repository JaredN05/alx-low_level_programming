#include "main.h"

/*
 * Task: 5. 101
 * Creator: Jared Naicker
 */

/**
  * clear_bit - Code sets the value of a bit to 0
  * @n: The number to change
  * @index: The index in the number to change
  *
  * Return: 1 if it success, or -1 if fails
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
