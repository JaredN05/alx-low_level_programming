#include <stdio.h>

/*
 * Task: 4. When I was having that alphabet soup,
 * 	    I never thought that it would pay off
 * Creator: Jared Naicker
 */

/**
 * main - Displays the alphabet in lowercase, except for q and e, using the for loop.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
