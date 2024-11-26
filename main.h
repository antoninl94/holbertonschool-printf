#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

typedef struct type_from
{
	char *fmt;
	void (*f)(va_list args);
} format_type;

int _printf(const char *format, ...);
int printf_c(va_list args);
int print_s(va_list args);
int print_pourcent(va_list args);

#endif
