#include "main.h"

/*
 * Task: 8. You are so much sunshine in every square inch
 * Creator: Jared Naicker
 */

/**
 * print_square - Prints a square using the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (hgt == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
