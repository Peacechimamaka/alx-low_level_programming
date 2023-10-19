#include "main.h"

/**
 *string_toupper - the name of the function
 * @n: parameter
 * Return: n
 */
char *string_toupper(char *n)
{
int x = 0;

while (n[x] != '\0')
{
if (n[x] >= 'a' && n[x] <= 'z')
n[x] = n[x] - 32;
x++;
}
return (n);
}
