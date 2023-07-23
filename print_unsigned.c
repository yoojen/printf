#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_unsig -> print positive number
 * @u: param
 * Return: number positive
 */

int print_unsig(va_list u)
{
	unsigned int len, pow, j, digit, n, num;
	int count = 0;

	n = va_arg(u, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		pow = 1;
		for (j = 1; j <= len - 1; j++)
			pow *= 10;
		for (j = 1; j <= len; j++)
		{
			digit = n / pow;
			_putchar(digit + '0');
			count++;
			n -= digit * pow;
			pow /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}

