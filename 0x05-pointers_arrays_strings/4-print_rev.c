#include "main.h"
#include <stdio.h>

/*
 * Task: 4. I can only go one way. I've not got a reverse gear
 * Creator: Jared Naicker
 */

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
