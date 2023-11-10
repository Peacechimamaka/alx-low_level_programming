#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - function name
 * @separator : char to be printed
 * @n: number of times it will be printed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list ps;

	va_start(ps, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ps, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if ((separator != NULL) && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ps);
}
