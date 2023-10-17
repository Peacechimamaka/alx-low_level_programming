#include "main.h"
/**
 * print_array - tha function that prints an array
 * @a: the initial arguement
 * @n: the secong arguement
 */

void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
	printf("%d", a[x]);
			if (x < n - 1)
			printf(", ");
			}
			printf("\n");
}
