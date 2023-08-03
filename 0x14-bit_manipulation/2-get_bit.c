#include "main.h"

/*
 * Task: 2. 10
 * Creator: Jared Naicker
 */

/**
  * get_bit - Code gets the value of a bit at a given index
  * @n: The number to find the index
  * @index: The index to find
  *
  * Return: The value of the bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
