#include <stdio.h>

/**
 * main - C program to orint all base
 * 16 numbers followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{
		putchar(p);
	}
	for (p = 97; p < 103; p++)
	{
		putchar(p);
	}
	putchar('\n');

	return (0);
}
