#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int cents, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]); /* Parse the parameter passed to the program */
if (cents < 0) /* Check if the amount is negative */
{
printf("0\n");
return (0);
}
while (cents >= 25)
{
coins++;
cents -= 25;
}
while (cents >= 10)
{
coins++;
cents -= 10;
}
while (cents >= 5)
{
coins++;
cents -= 5;
}
while (cents >= 2)
{
coins++;
cents -= 2;
}
while (cents >= 1)
{
coins++;
cents -= 1;
}
printf("%d\n", coins);
return (0);
}

