#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - prints a single chrarcter
 * @c: is character passed
 * Return: nothing
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * _printf - prints strings and charaacters
 * @format: is the string passed
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int i = 0, k = 0, j = 0;
	char ch, *str;

	va_start(ptr, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 's':
					str = va_arg(ptr, char *);
					for (k = 0; str[k] != '\0'; k++)
					{
						_putchar(str[k]);
						j++;
					}
					break;
				case 'c':
					ch = va_arg(ptr, int);
					_putchar(ch);
					j++;
					break;
				default:
                                        _putchar(format[i]);
                                        j++;
                                        break;
			}
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
	i++;
	}
	va_end(ptr);
	return (j);
}
