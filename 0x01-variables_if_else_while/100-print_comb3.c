#include <stdio.h>

/**
 * main - This program prints all possible combination
 * of two numbers with a space followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int peace, amaka;

	for (peace = 0; peace < 9; peace++)
	{
		for (amaka = peace + 1; amaka < 10; amaka++)
		{
			putchar((peace % 10) + '0');
			putchar((amaka % 10) + '0');

			if (peace == 8 && amaka == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
