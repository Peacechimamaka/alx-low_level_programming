#include <stdio.h>
/**
 * main - the function
 * @argc: arguement
 * @argv: arguement
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
