#include "main.h"
/**
 *  rev_string - the function that prints in reverse
 *   @s: the parameter
 */
void rev_string(char *s)
{
	int x;
	int peace = 0;

for (x = 0; s[x] != '\0'; x++)
peace++;
for (x = 0; x < peace / 2; x++)
{
	char y;

	y = s[x];
	s[x] = s[peace - 1 - x];
	s[peace - 1 - x] = y;
	}
}
