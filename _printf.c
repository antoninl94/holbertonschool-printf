#include "main.h"

/**
 * _printf - Print character depending of the format selected
 * @format: format selected to print
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	type_format arr[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	int i = 0;
	int j;
	int size;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (j != 3)
			{
				
			}
		}
		write(1, &format[i], 1);
		i++;
	}
	return(size);
}
