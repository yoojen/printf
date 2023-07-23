#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_dec -> print in
 * @d: integer to print
 * Return: int
 */

int print_dec(va_list d)
{
	int num = va_arg(d, int);
	int digit, reversed = 0;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	while (num != 0)
	{
		digit = num % 10;
		reversed = reversed * 10 + digit;
		num /= 10;
	}

	while (reversed != 0)
	{
		digit = reversed % 10;
		_putchar(digit + '0');
		reversed /= 10;
	}
	return (num);
}
