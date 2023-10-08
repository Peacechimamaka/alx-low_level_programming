#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - C program tht prints the last digit of a randomly
 * generated number and determines if it is greater than 5,
 * less than 6 or 0
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int peace;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	peace = n % 10;

	if (peace == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, peace);
	}
	else
	{
		if (peace > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, peace);
		}
		else if (peace < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, peace);
		}
	}
	return (0);
}
