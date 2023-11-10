#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - the function that prints numvers
 * @separator : separates the nums
 * @n: numbar of args
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list print_nums;

	va_start(print_nums, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print_nums, int));
			if ((separator != NULL) && (i < n-1))
		printf ("%s", separator);
	}
printf("\n");
va_end (print_nums);
}
