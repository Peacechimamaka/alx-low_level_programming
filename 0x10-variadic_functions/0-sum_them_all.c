#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that sums all numbers
 *@n :parameter
 *Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;

	va_list sum;

	va_start(sum, n);
	
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(sum, int);
	}
	
	va_end(sum);

	return (result);
}
