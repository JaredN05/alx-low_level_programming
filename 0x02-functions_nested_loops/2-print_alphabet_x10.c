
#include "main.h"

/*
 * Task: 2. 10 x alphabet
 * Creator: Jared Naicker
 */

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alphabet;

	while (count++ <= 9)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
	}
}
