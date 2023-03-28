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
	char *variable_string;
	type_flags flags;

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
				flags = type_checker(format + i);
				if (flags.fun != NULL)
				{
					i += flags.steps;
					if (flags.width_flag)
						flags.width = va_arg(ptr, int);
					variable_string = flags.fun(ptr);
					variable_string =
						flags_handler(variable_string,
							      flags);
					len += string_size(variable_string);
					_puts(variable_string);
					free(variable_string);
				}
				else
					return (-1);
			}
		}
		i++;
	}
	return (len);
}
