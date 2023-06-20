#include "main.h"

/*
 * Task: 1. I sometimes suffer from insomnia.
 * Creator: Jared Naicker
 */

/**
 * main - Displays the alphabet in lowercase, using a function.
 *
 * Return: Always 0.
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
