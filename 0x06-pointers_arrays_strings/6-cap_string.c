#include "main.h"

/**
  * cap_string - The function that capiyalizes
  * @str: Function parameter of the string
  * Return: Void.
  */

char *cap_string(char *str)

{
int peace = 0;

while (str[peace])
{
while (!(str[peace] >= 'a' && str[peace] <= 'z'))
peace++;
if (str[peace - 1] == ' ' ||
str[peace - 1] == '\t' ||
str[peace - 1] == '\n' ||
str[peace - 1] == ',' ||
str[peace - 1] == ';' ||
str[peace - 1] == '.' ||
str[peace - 1] == '!' ||
str[peace - 1] == '?' ||
str[peace - 1] == '"' ||
str[peace - 1] == '(' ||
str[peace - 1] == ')' ||
str[peace - 1] == '{' ||
str[peace - 1] == '}' ||
peace == 0)
str[peace] -= 32;
peace++;
}
return (str);
}
