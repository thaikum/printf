#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * _printf - prints strings and charaacters
 * @format: is the string passed
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int len = 0;
	specifier mod[] = {
		{"c", printch},
		{"s", mystring},
		{"b", int_to_bin},
		{NULL, NULL}
	};

	va_list ptr;

	if (format == NULL)
		return(-1);

	va_start(ptr, format);

	len = match(format, mod, ptr);
	va_end(ptr);
	return (len);
}
