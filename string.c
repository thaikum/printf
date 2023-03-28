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
	int k;
	char *strNULL = "(null)";
	char *str = va_arg(ptr, char *);

	if (str == NULL)
	{
		for (k = 0; strNULL[k] != '\0'; k++)
		{
			_putchar(strNULL[k]);
		}
	}
	else
	{
		for (k = 0; str[k] != '\0'; k++)
			_putchar(str[k]);
	}
	return (k);
}
