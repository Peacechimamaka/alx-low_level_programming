#include <stdio.h>
#include <ctype.h>

/**
 * main - C program to print all possiblle combination of single
 * digit numbers, followes by a space, in ascending order
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
