#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct modify
{
	char *modifier;
	int (*f)(va_list);
} eachModifier;

int _putchar(char c);
int _printf(const char *format, ...);

int print_char(va_list c);
int print_string(va_list s);
int print_number(va_list i);
int print_mod(va_list mod);
int print_dec(va_list d);
int print_rev(va_list r);
int print_bin(va_list b);
int print_unsig(va_list u);
int print_octal(va_list o);
int print_x(va_list x);
int print_rev_string(va_list args);

#endif 
