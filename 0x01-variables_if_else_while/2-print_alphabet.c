#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Task: 1. The last digit
 * Creator: Jared Naicker
 */

/**
 * main - Displays the alphabets in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	for (alphabet = "a"; alphabet <= "z"; alphabet++)
		putchar(alphabet);

	putchar("\n");

	return (0);
}
