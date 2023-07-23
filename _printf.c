#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * functions -> get prototypes
 * @format: va_lits
 * Return: null
 */
int (*functions(const char *format))(va_list)
{
	unsigned int i = 0;
	eachModifier fun_used[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_dec},
		{"i", print_number},
	        {"r", print_rev},
		{"%", print_mod},
	        {"b", print_bin},
	        {"o", print_octal},
		{"u", print_unsig},
	        {"x", print_x},
		{NULL, NULL},
	};

	while (fun_used[i].modifier)
	{
		if (fun_used[i].modifier[0] == (*format))
			return (fun_used[i].f);
		i++;
	}
	return (NULL);
}

/**
 * _printf -> print
 * @format: va_list
 * Return: int;
 */

int _printf(const char *format, ...)
{
	va_list otherArgs;
	int (*f)(va_list);
	unsigned int i = 0, tobePrinted = 0;

	if (format == NULL)
		return (-1);
	va_start(otherArgs, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			tobePrinted++;
			i++;
		}
		if (format[i] == '\0')
			return (tobePrinted);
		f = functions(&format[i + 1]);
		if (f != NULL)
		{
			tobePrinted += f(otherArgs);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		tobePrinted++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(otherArgs);
	return (tobePrinted);
}
