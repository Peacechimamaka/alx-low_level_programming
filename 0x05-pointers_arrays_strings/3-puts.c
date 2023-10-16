#include <main.h>

/**
 * _puts - a function that prints using putxhar
 * @str: the defined parameter of the function
 */

void _puts(char *str)
{
char x;

for (x = 0; str[x] != '\0'; x++)
	_putchar (str);
		_putchar ('\n');
}

