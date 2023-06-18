#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Task: 0. Positive anything is better than negative nothing
 * Creator: Jared Naicker
 */

/**
 * main - The program will print a random number, 
 * 	  and will display if the number is positive or negative.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
            printf("%d is positive\n", n);
        else if (n < 0)
            printf("%d is negative\n", n);
        else
            printf("%d is zero\n", n);

	return (0);
}
