#include "main.h"
#include <stdarg.h>

/**
 * printoct - print octal variables
 * @list: is an argument point.
 *
 * Return: the length of character printed.
 */
int printoct(va_list list)
{
	unsigned int num;
	int i, len;
	char *str, *revstr;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (0);
	if (num < 1)
		return (-1);
	len = base_len(num, 8);

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		str[i] = (num % 8) + 48;
		num = num / 8;
	}
	str[i] = '\0';
	revstr = rev_string(str);
	if (revstr == NULL)
		return (-1);

	for (i = 0; revstr[i] != '\0'; i++)
	{
		_putchar(revstr[i]);
	}
	free(revstr);
	free(str);
	return (len);
}

/**
 * print_heX - converts decimal to hexadecimal uppercase
 * @ptr: is an argument pointer;
 *
 * Return: number of items printed.
 */
int print_heX(va_list ptr)
{
	unsigned int num, remainder;
	int i, len;
	char *str, *revstr;

	num = va_arg(ptr, unsigned int);
	if (num == 0)
		return (0);
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		remainder = num % 16;
		if (remainder > 9)
		{
			remainder = remainder + 55;
			str[i] = remainder;
		}
		else
		{
			remainder = remainder + 48;
			str[i] = remainder;
		}
		num = num / 16;
	}
	str[i] = '\0';
	revstr = rev_string(str);

	for (i = 0; revstr[i] != '\0'; i++)
	{
		_putchar(revstr[i]);
	}
	free(str);
	free(revstr);
	return (len);
}

/**
 * print_hexalower - converts decimal to hexadecimal uppercase
 * @ptr: is an argument pointer;
 *
 * Return: number of items printed.
 */
int print_hexalower(va_list ptr)
{
	unsigned int num, remainder;
	int i, len;
	char *str, *revstr;

	num = va_arg(ptr, unsigned int);
	if (num == 0)
		return (0);
	if (num < 1)
		return (-1);

	len = base_len(num, 16);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		remainder = num % 16;
		if (remainder > 9)
		{
			remainder = remainder + 87;
			str[i] = remainder;
		}
		else
		{
			remainder = remainder + 48;
			str[i] = remainder;
		}
		num = num / 16;
	}
	str[i] = '\0';
	revstr = rev_string(str);

	for (i = 0; revstr[i] != '\0'; i++)
	{
		_putchar(revstr[i]);
	}
	free(str);
	free(revstr);
	return (len);
}
