#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return : 0
 */

void print_alphabet_x10(void)
{
	int x;
	int count = 0;

	while (count <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar (x);
		};
		count++;
		_putchar ('\n');
	}

}
