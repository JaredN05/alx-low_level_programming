#include "main.h"

/*
 * Task: 3. You mustn't be afraid to dream a little bigger, darling
 * Creator: Jared Naicker
 */


/**
  * factorial - Calculate the factorial of a number
  * @n: the number to calculate the factorial
  *
  * Return: integer value
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
