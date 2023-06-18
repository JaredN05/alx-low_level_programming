#include <stdio.h>

/*
 * Task: 2. I play what I call the alphabet game
 * Creator: Jared Naicker
 */

/**
 * main - Displays the alphabet in lowercase, using the for loop.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
