#include "main.h"

/**
 * largest_number - Returns the largest of 3 numbers
 * @a: the first num
 * @b: the second num
 * @c: the third num
 *
 * Return: largets number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && c > a)
	{
		largest = c;
	}
	else if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
