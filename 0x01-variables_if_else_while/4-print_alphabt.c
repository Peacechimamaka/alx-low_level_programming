#include <stdio.h>
#include <stdlib.h>

/**
 * main - C program to print the alphabest
 * exluding e abd q
 *
 * Return: 0
 */

int main(void)
{
	char peace;

	peace = 'a';

	while (peace <= 'z')
	{
		if (peace != 'e' && peace != 'q')
		{
			putchar(peace);
		}
		peace++;
	}
	putchar('\n');

	return (0);
}
