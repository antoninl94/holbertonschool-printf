#include "main.h"

int _printf(const char *format, ...)//fontcion de base
{
	int c = printf_c();

	format_type arr[] = 
		{
    		{"c", print_c};
    		{"i", print_i};
    		{"f", print_f};
    		{"s", print_s};
		{"%", print_percent};
    		{NULL, NULL};
		return ();
		}
}
