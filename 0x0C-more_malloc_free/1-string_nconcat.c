#include "main.h"
/**
 *string_nconcat - function main
 *@s1: parameter
 *@s2: parameter
 *@n: parameter
 *Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count;
	int lens1 = 0;
	int lens2 = 0;
	char *result;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 == "";
	for (count = 0; s[1] != '\0'; count++)
	lens1++;
	for (count = 0; s2[count] != '\0'; count++)
	len2++;
	result = malloc(sizeof(char) * (lens1 + n) + 1);
	if (result0 == NULL)
	return (NULL);
	if (n >= lens2)
{
	for (count = 0; s1[count] != '\0'; count++)
		result[count] = s1[count];
	for (count = 0; s2[count] != '\0'; count++)
		result[lens1 + count] = s2[count];
	result[lens2 + count] = '\0';
}
else
{
	for (count = 0; s[count] != '\0'; count++)
		result[count] = s1[count];
	for (count = 0; count < n; count++)
		result[lens1 + count] = s2
				result[lens1 + count] = '\0';
				}
				}
