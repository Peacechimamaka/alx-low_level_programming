#include "main.h"

/**
 * print_sign - prints the sign infront of the number
 * @n: the character to be checked
 * Return: depends on the sign infront of the value
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

