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
		(*len)++;
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
specifier type_checker(const char *str)
{
	int x = 1, y;
	specifier mod[] = {{'c', printch, 1}, {'s', print_string, 1},
			   {'d', print_integer, 1}, {'i', print_integer, 1},
			   {'b', int_to_binary, 1},
			   {'\0', NULL, 0}};

	while (str[x])
	{
		for (y = 0; mod[y].spec; y++)
			if (str[x] == mod[y].spec)
			{
				mod[y].steps = x;
				return (mod[y]);
			}
		x++;
	}

	return (mod[y]);
}

/**
 * base_len - calculates the length of number in new base.
 * @n: accepts number in basee 10.
 * @base: the new base.
 *
 * Return: the length of the numbers.
 */
int base_len(unsigned int n, unsigned int base)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		n = n / base;
	}

	return (i);
}
