#include <stdio.h>
#include <ctype.h>

/**
 * main - C program to print single digit
 * numbers in base 10
 *
 * Return: 0
 */

int main(void)
{
	int peace;

	for (peace = '0'; peace <= '9'; peace++)
	{
		putchar(peace);
	}
	putchar('\n');

	return (0);
}
