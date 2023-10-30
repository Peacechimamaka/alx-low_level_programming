#include "main.h"

/**
  * _strstr - main function
  * @needle: function parameter
  * @haystack: function parameter
  * Return: Always 0.
  */

char *_strstr(char *haystack, char *needle)

{
for (; *haystack != '\0'; haystack++)
{
char *A = haystack;
char *B = needle;
while (*A == *B && *B != '\0')
{
A++;
B++;
}
if (*B == '\0')
return (haystack);
}
return (0);
}
