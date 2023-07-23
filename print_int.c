#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_number -> print in
 * @i: integer to print
 * Return: int
 */

int print_number(va_list i)
{
	int num = va_arg(i, int);
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

