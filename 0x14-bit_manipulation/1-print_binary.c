#include "main.h"

/*
 * Task: 1. 1
 * Creator: Jared Naicker
 */

/**
  * print_binary - The code prints the binary representation of a number
  * @n: The number to representing in binary
  *
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
