#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_string -> prints string
 * @s: strig to print
 * Return: string
 */

int print_string(va_list s)
{
	unsigned int i = 0;
	char *myString;

	myString = va_arg(s, char *);

	if (myString == NULL)
		myString = "(null)";

	while (myString[i])
	{
		_putchar(myString[i]);
		i++;
	}
	return (i);
}
