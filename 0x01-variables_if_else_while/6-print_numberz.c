#include <stdio.h>

/*
 * Task: 6. Numberz
 * Creator: Jared Naicker
 */

/**
 * main - Displays all single digit numbers of base 10 starting from 0, using putchar.
 *
 * Return: Always 0.
 */
nt main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
