#include <stdio.h>

/*
 * Task: 7. Smile in the mirror
 * Creator: Jared Naicker
 */

/**
 * main - Displays the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
