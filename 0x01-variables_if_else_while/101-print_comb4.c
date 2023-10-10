#include <stdio.h>

/**
 * main - C program that prints all possible different
 * combinations of three digits.
 * Numbers must be separated by ,
 * 012, 120, 102, 021, 201, 210 are considered the same
 * combination of the three digits 0, 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');

				if (a == 7 && b == 8 && c == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
