#include "main.h"
/**
 * puts_half - the function that prints half of the sting
 * @str: the arguement of the function
 */

void puts_half(char *str)
{
	int x;
	int y;
	int peace = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		peace++;
	}
	y = (peace - 1) / 2;
	for (x = y + 1; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
