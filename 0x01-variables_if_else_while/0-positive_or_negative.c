#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - C program that prints random numbers
 * abd determine if the numbers are positive,
 * negative or 0
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));

	n =  rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
