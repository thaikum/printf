#include <stdarg.h>
#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - prints one chararcter
 * @c: is the character to be printed
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
/**
 * print_string - prints string.
 * @ptr: argument pointer
 * Return: number of strings printed
 */
int print_string(va_list ptr)
{
	int l = 0, k = 0;
	char *str;

	str = va_arg(ptr, char *);
	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
		l++;
	}
	if (str == NULL)
		str = ("null");
	return (l);
}

/**
 * printch - prints a character
 * @ptr: argument pointer
 * Return: number if character printed
 */
int printch(va_list ptr)
{
	int j = 0;
	char ch;

	ch = va_arg(ptr, int);
	_putchar(ch);
	j++;

	return (j);
}
