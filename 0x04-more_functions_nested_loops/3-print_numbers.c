#include "main.h"

/*
 * Task: 3. The numbers speak for themselves
 * Creator: Jared Naicker
 */

/**
 * print_numbers - Prints the numbers from 0-9, followed by a new line.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
