#include "main.h"
#include <stdarg.h>

/**
 * printch - prints a character
 * @ptr: argument pointer
 * Return: number if character printed
 */
int printch(va_list ptr)
{
	int ch = va_arg(ptr, int);

	_putchar(ch);
	return (1);
}
