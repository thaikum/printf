#include "main.h"

/**
 * printunsigned - prints unsigned int
 * @ptr: argument pointer
 *
 * Return: length of number
 */
int print_UNS(va_list ptr)
{
	unsigned int num;

	num = va_arg(ptr, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}
/**
 * print_unsgined_number - display unisigend int
 * @n: number to be printed
 * Return: numbers printed
 */
int print_unsgined_number(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len++;
		_putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
