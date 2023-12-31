#include "main.h"
#include <stdio.h>

/*
 * Task: 4. I can only go one way. I've not got a reverse gear
 * Creator: Jared Naicker
 */

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
