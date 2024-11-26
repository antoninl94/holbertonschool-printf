#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int print_s(va_list args);
int print_c(va_list args);
int print_percent(va_list args);

/**
 * struct format_type - link a function to the format letter
 * @fmt: the format letter
 * @f: the function lnked to the format letter
 */
typedef struct format_type
{
	char *fmt;
	int (*f)(va_list args);
} type_format;

#endif
