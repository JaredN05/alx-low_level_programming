#include "main.h"

/*
 * Task: 1. isdigit
 * Creator: Jared Naicker
 */

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: The number to be checked.
 *
 * Return: 1 if number is digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
