#include <stdio.h>
#include <ctype.h>

/**
 * main - C program that prints alphabets in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char peace;

	for (peace = 'a'; peace <= 'z'; peace++)
		putchar(peace);
	putchar('\n');

	return (0);
}
