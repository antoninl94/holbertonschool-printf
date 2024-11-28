#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _putchar - print character
 * @c: character to print
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * recursion_print - print int
 * @num: int to print
 */
void recursion_print(int num)
{
	if (num < 0 && num != INT_MIN)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10 != 0)
		recursion_print(num / 10);
	_putchar(abs(num % 10) + '0');
}

/**
 * count_number - count printed number
 * @num: nummber to count
 * Return: 1 if num == 0 otherwiser i
 */
int count_number(int num)
{
	int i;

	if (num < 0)
	{
		num = num * -1;
		for (i = 0; num >= 1; i++)
		{
			num = num / 10;
		}
		return (i + 1);
	}
	for (i = 0; num >= 1; i++)
	{
		num = num / 10;
	}
	return (i);
}
