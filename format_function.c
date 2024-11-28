#include "main.h"
#include <unistd.h>

/**
 * print_c - print character
 * @args: the character to print
 * Return: Always 1 (size of a character)
 */
int print_c(va_list args)
{
	int c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}

/**
 * print_s - print string
 * @args: the string to print
 * Return: the size of the string
 */
int print_s(va_list args)
{
	char *str = va_arg(args, char *);
	int s = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[s] != '\0')
	{
		write(1, &str[s], 1);
		s++;
	}
	return (s);
}

/**
 * print_percent - print percent symbol
 * @args: the symbol to print (percent)
 * Return: Always 1
 */
int print_percent(va_list args)
{
	write(1, "%", 1);
}

/**
 * print_d_i - print an integer
 * @args: the int to print
 * Return: number of characters printed
 */
int print_d_i(va_list args)
{
	int num = va_arg(args, int);

	recursion_print(num);
	return (0);
}
