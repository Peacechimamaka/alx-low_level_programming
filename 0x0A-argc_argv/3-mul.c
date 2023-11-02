#include <stdio.h>
#include <stdlib.h>
/**
 * main - the function
 *@argc: number of arguements
 *@argv: the arguements
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;
	int num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	if (argc == 1)
	{
		printf("Error\n");
	}
	else if (argc == 3)
	{
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
