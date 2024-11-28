#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
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
		{"d", print_d_i},
		{"i", print_d_i},
		{"%", print_percent},
		{NULL, NULL}
	};
	int i = 0, j, count = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;
			for (j = 0; arr[j].fmt != NULL; j++)
			{
				if (format[i] == *arr[j].fmt)
				{
					count += arr[j].f(args);
					i++;
					break;
				}
			}
		}
		else
		{
		write(1, &format[i], 1);
		i++;
		count++;
		}
	}
	va_end(args);
	return (count);
}
