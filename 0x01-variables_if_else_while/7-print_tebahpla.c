#include <stdio.h>
#include <ctype.h>

/**
 * main - C orograme to print the alphabets in reverse
 * putchar can only be used twice
 * printf not allowed
 *
 * Return: 0
 */

int main(void)
{
	int peace;

	for (peace = 'z'; peace >= 'a'; peace--)
	{
		putchar(peace);
	}
	putchar('\n');

	return (0);
}
