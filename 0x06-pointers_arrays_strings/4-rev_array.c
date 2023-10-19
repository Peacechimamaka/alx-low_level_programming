#include "main.h"

/**
 *reverse_array - the main function
 *@a: first parameter
 *@n: second parameter
 *Return: 0
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
