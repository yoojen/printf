#include "main.h"
#include <unistd.h>

/**
 * _putchar -> print something
 * @c: char
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
