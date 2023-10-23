#include "main.h"


/**
  * _memset - main function
  * @b: The value used to fill the memory
  * @s: 1st paramater
  * @n: 2nd parameter
  * Return: alway s, om success
  */

char *_memset(char *s, char b, unsigned int n)

{
unsigned int x;

for (x = 0; x < n; x++)
s[x] = b;
return (s);
}
