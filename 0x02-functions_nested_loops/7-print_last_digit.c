#include "main.h"
/**
 *print_last_digit - a funtion that prints the last digit of it's nu
 *@n : the number whose last digit is to be printed
 *Return : returns the last digit
 */

int print_last_digit(int n)
{
	int result = n % 10;

	if (result < 0)
		result = -result;
	_putchar ('0' + result);

	return (result);
}
