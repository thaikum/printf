#include "main.h"
#include <stdarg.h>

/**
 * print_integer - prints an integer
 * @ap: the pointer to the the integer
 *
 * Return: the number of digits printed
 */
int print_integer(va_list ap)
{
	int k = va_arg(ap, int);
	int len = 0;

	print_number(k, &len);
	return (len);
}

/**
 * int_to_binary - converts unsigned int to binary
 * @ptr: is argument pointer.
 *
 * return: number of items printed
 */

