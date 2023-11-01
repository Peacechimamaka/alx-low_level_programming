#include <stdlib.h>
#include "main.h"
/**
* _strdup - the function name
* @str: the string
* Return: 0
*/

char *_strdup(char *str)
{
char *ptrstr;
int i = 0;
int counter;

while (str[i] != '\0')
{
i++;
}
ptrstr = malloc((i + 1) * sizeof(char));
if (ptrstr == NULL)
{
return (NULL);
}
for (counter = 0; counter != '\0'; counter++)
{
ptrstr[counter] = str[counter];
}
ptrstr[counter] = '\0';
return (ptrstr);
}
