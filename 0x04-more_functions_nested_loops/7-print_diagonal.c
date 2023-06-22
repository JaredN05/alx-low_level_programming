#include "main.h"

/*
 * Task: 7. I feel like I am diagonally parked in a parallel universe
 * Creator: Jared Naicker
 */

/**
 * print_diagonal - Prints a diagonal line using the character \.
 * @n: The number of _ characters to be printed.
 */
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
