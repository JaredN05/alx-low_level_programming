#include "main.h"

/*
 * Task: 1. Why is it so important to dream?
 * Creator: Jared Naicker
 */

/**
  * _print_rev_recursion - Print a string in reverse
  * @s: the string to reverse
  *
  * Return: Nothing.
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
