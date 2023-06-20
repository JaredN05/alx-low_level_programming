#include "main.h"

/*
 * Task: 1. I sometimes suffer from insomnia.
 * Creator: Jared Naicker
 */

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
}
