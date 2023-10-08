#include <stdio.h>
#include <ctype.h>

/**
 * main - C programe that prints the alphabets
 * in lower and uppercase
 *
 * Return: 0
 */

int main(void)
{
	char peace[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int amaka;

	for (amaka = 0; amaka < 52; amaka++)
	{
		putchar(peace[amaka]);
	}
	putchar('\n');
	return (0);
}
