/*
 * Task: 0. Positive anything is better than negative nothing
 * Creator: Jared Naicker
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	
	printf("Random number is:\n%d \n", n);

	if (n > 0)
        {
            printf("The number is positive \n");
        }
        else if (n < 0)
        {
            printf("The number is negative \n");
        }
        else
        {
            printf("The number is zero \n");
        }

	return (0);
}
