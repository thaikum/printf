#include "main.h"
#include <stdarg.h>

/**
 * printch - prints a character
 * @ptr: argument pointer
 * Return: number if character printed
 */
int printch(va_list ptr)
{
        _putchar(va_arg(ptr, int));
        return (1);
}
