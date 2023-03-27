#include "main.h"
#include <stdlib.h>

/**
 * print_number - prints a number to the screen
 * @num: the number to print
 * @len: to monitor the lenght of the characters printed
 */
void print_number(int num, int *len)
{
	(*len)++;
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
		print_number(num / 10, len);

	_putchar(num % 10 + '0');
}

/**
 * type_checker - checks which type to consider
 * @str: the string with the starting point as a %
 * Return: an array of two integers.
 *	first being the steps to the type modifier
 *	second being the type modifier itself
 */
type_cont type_checker(const char *str)
{
	char current_types[] = "%idcs";
	int x = 1, y;
	type_cont t;

	while (str[x])
	{
		for (y = 0; y < 5; y++)
		{
			if (str[x] == current_types[y])
			{
				t.steps = x;
				t.modifier = str[x];
				return (t);
			}
		}
		x++;
	}
	t.steps = 1;
	t.modifier = '\0';
	return (t);
}
