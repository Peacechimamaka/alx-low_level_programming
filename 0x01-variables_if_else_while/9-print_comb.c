#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0
 */
int  main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	{
		putchar(num);
	}
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
