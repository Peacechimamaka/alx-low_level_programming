#include "main.h"

/**
 * print_rev - the function that prints in reverse
 * @s: the parameter
 */

void print_rev(char *s)
{
int x;
int peace = 0;

for (x = 0; s[x] != '\0'; x++)
	peace++;

for (x = peace - 1; x >= 0; x--)
_putchar (s[x]);
_putchar ('\n');
}

