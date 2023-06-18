#include <stdio.h>

/*
 * Task: 8. Hexadecimal
 * Creator: Jared Naicker
 */

/**
 * main - Displays all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char alphabet;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
