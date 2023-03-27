#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * match - matches modifier to function
 * @format: string to be passed
 * @ptr: is an argument pointer
 * Return: return the number of character printed
 */
int match(const char *format, va_list ptr)
{
	int i = 0, len = 0;
	specifier spc;

	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				len++;
				i++;
			}
			else
			{
				spc = type_checker(format + i);

				if (spc.fun != NULL)
				{
					i += spc.steps;
					len += spc.fun(ptr);
				}
				else
				{
					exit(90);
				}
			}
		}
		i++;
	}
	return (len);
}
