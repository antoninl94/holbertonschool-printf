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

	while (num[i] != recursion_print)
	{
		i++;
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
		(num * -1);
	}
	if (num > 9)
		res = recursion_print(num / 10);
	res = _putchar(num % 10 + '0');
	return (strint(res));
}
