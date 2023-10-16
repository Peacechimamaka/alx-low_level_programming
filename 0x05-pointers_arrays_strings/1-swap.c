#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: one of the variables
 * @b: the next variable to be swqpped
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
