#include "main.h"

/**
 * _puts - a function that prints using putxhar
 * @str: the defined parameter of the function
 */

void _puts(char *str)
{
	int x;

for (x = 0; str[x] != '\0'; x++)
	_putchar (str[x]);
		_putchar ('\n');
}

