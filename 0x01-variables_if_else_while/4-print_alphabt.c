#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
char (letter); letter = 'a';

for (letter = 'a' ; letter <= 'z' ; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');
return (0);
}
