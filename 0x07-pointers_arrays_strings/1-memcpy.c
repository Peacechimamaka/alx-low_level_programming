#include "main.h"


/**
  * _memcpy - main function
  * @src: parameter
  * @dest: final destination
  * @n:  parameter
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int x;

for (x = 0; x < n; x++)
{
dest[x] = src[x];
}
return (dest);
}
