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
	int (*f)(va_list args);
} type_format;

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_pourcent(va_list args);

#endif
