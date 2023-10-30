#include "main.h"
/**
 * _atoi - function name
 * @s: parameter
 * Return: int converted from the string
 */

int _atoi(char *s)
{
int y = 0;
int z = 0;
int len = 0;
int pea = 0;
int value = 0;

while (s[len] != '\0')
len++;
while (x < len && pea == 0)
{
if (s[x] == '-')
++y;
if (s[x] >= '0' && s[x] <= '9')
{
value = s[x] - '0';
if (y % 2)
value = -value;
z = z * 10 + value;
pea = 1;
if (s[x + 1] < '0' || s[x + 1] > '9')
break;
pea = 0;
}
x++;
}
if (pea == 0)
return (0);
return (z);
}
