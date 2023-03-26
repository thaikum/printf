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
int _printf(char *format, ...)
{
	va_list ap;
	unsigned int x;
	char *str;
	int len = 0, inner;
	type_cont type;

	va_start(ap, format);
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			len++;
			_putchar(format[x]);
		}
		else
		{
			type = type_checker(format + x);

			switch (type.modifier)
			{
			case 'i':
			case 'd':
				print_number(va_arg(ap, int), &len);
				x += type.steps;
				break;
			case '%':
				_putchar('%');
				len++;
				x += type.steps;
				break;
			case 'c':
				_putchar(va_arg(ap, int));
				len++;
				x += type.steps;
				break;
			case 's':
				for (inner = 0; str[inner] != '\0'; inner++)
				{
					_putchar(str[inner]);
					len++;
				}
			default:
				exit(78);
			}
		}
	}
	va_end(ap);
	return (len);
}
