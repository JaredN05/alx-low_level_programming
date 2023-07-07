#include <stdio.h>
#include "main.h"

/*
 * Task: 1. Silence is argument carried out by other means
 * Creator: Jared Naicker
 */

/**
  * main - Prints the number of args
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
