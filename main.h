#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_s(va_list args);
int print_c(va_list args);
int print_percent(va_list args);
int print_d_i(va_list args);
void recursion_print(int a);
int count_number(int num);

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
