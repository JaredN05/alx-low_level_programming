#include <stdio.h>

/*
 * Task: 3. alphABET
 * Creator: Jared Naicker
 */

/**
 * main - Displays the alphabet in lowercase and uppercase, using the for loop.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
