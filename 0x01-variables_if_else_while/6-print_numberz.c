#include <stdio.h>
#include <ctype.h>

/**
 * main - C program to print all possible
 * single digits numbers in base 10, using
 * without variable if char type
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
