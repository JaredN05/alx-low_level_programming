#include "main.h"

/*
 * Task: 6. There is no such thing as absolute value in this world.
 * 	    You can only estimate what a thing is worth to you.
 * Creator: Jared Naicker
 */

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer will be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
