#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * _putchar - print character
 * @c: character to print
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int strint(int num)
{
	int i = 0;

	if (num < 0)
	{
		num = -num;
	}
	while (num != 0)
	{
		i++;
		num /= 10;
	}
	return (i);
}
/**
 * recursion_print - print int
 * @num: int to print
 */
int recursion_print(int num)
{
	int res = 0;

	if (num < 0)
	{
		 _putchar('-');
		 res++;
		num = -num;
	}
	if (num > 10)
		res += recursion_print(num / 10);
		_putchar((num % 10) + '0');
		res++;
	return (res);
}
