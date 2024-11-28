#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _printf - Print character depending of the format selected
 * @format: format selected to print
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	/*initialisation of a type type_format array*/
	type_format arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d_i},
		{"%", print_percent},
		{NULL, NULL}
	};
	int i = 0;
	int j;
	int count = 0;

	va_start(args, format);
	/*if format == NULL the loop don't initialize*/
	while (format != NULL && format[i] != '\0')
	{
		/*if the loop meet a '%', that initialize a loop to compare the next char*/
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;
			for (j = 0; j < 3; j++)
			{
				/*if the character match with the format letter : */
				if (format[i] == *arr[j].fmt)
				{
					/*use the appropriate function and count*/
					count += arr[j].f(args);
					i++;
				}
			}
		}
		else
		{
		/*if the first loop don't meet '%', print the character*/
		write(1, &format[i], 1);
		i++;
		/*count the number of character printed*/
		count++;
		}
	}
	va_end(args);
	return (count);
}
