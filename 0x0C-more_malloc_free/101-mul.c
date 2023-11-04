#include "main.h"
#include <ctype.h>
/**
* main - the main function
* @argc: the number of args
* @argv: the args
* Return: 0
*/

int main(int argc, char *argv[])
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int mul;

mul = num1 * num2;
if (argc != 3)
{
	printf("Error\n");
	exit(98);
}
if (isdigit(*argv[1]) && (isdigit(*argv[2])))
{
	printf("%d\n", mul);
}
else
{
	printf("Error\n");
	exit(98);
}
return (0);
}
