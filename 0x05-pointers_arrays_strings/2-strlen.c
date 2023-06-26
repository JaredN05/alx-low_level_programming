#include "main.h"

/*
 * Task: 2. This report, by its very length.
 * Creator: Jared Naicker
 */

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length.
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
