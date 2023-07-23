#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char -> print char
 * @c: param
 * Return: int
 */

int print_char(va_list c)
{
	char myChar;

	myChar = va_arg(c, int);
	_putchar(myChar);
	return (1);
}
