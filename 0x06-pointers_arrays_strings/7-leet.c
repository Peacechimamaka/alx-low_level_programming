#include "main.h"
#include <stdio.h>

/**
  *leet - the function name
  * @n: Function parameter
  *Return:  n
 */
char *leet(char *n)

{
int y, z;
char pe[] = "aAeEoOtTlL";
char pea[] = "4433007711";

for (y = 0; n[y] != '\0'; y++)
{
for (z = 0; z < 10; z++)
{
if (n[y] == pe[z])
{
n[y] = pea[z];
}
}
}
return (n);
}
