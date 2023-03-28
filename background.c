#include "main.h"
#include <stdlib.h>

/**
 * print_number - prints a number to the screen
 * @num: the number to print
 * @len: to monitor the lenght of the characters printed
 */
void print_number(long num, int *len)
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
 * Return: flags struct with steps taken and all the flags handled
 */
type_flags type_checker(const char *str)
{
	int x = 1, y;
	specifier mod[] = {{'c', printch}, {'s', print_string},
			   {'d', print_integer}, {'i', print_integer},
			   {'\0', NULL}};
	type_flags flags = {1, NULL, 0, 0, 0, 0, 0};

	while (str[x])
	{
		switch (str[x])
		{
		case '*':
			flags.width_flag = 1;
			break;
		case '.':
			flags.precision_flag = 1;
			break;
		case '-':
			flags.hyphene_flag = 1;
			break;
		default:
			for (y = 0; mod[y].spec; y++)
				if (str[x] == mod[y].spec)
				{
					flags.fun = mod[y].fun;
					flags.steps = x;
					return (flags);
				}
			if (flags.precision_flag &&
			    str[x] >= '0' && str[x] <= '9')
				flags.precision =
					flags.precision * 10 + str[x] - '0';
		}
		x++;
	}

	return (flags);
}
