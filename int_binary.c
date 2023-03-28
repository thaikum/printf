#include "main.h"
#include <stdarg.h>


/**
 * int_to_binary - converts unsigned int to binary
 * @ptr: is argument pointer.
 *
 * Return: number of items printed
 */
int int_to_binary(va_list ptr)
{
	int i, len = 0;
	char *binary;

	unsigned int num = va_arg(ptr, unsigned int);

	if (num == 0)
		return (0);
	len = base_len(num, 2);

	binary = malloc(sizeof(char) * len + 1);

	if (binary == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		binary[i] = num % 2;
		num = num / 2;
	}
	binary[i] = '\0';

	for (i = len - 1; i > 0; i--)
	{
		_putchar(binary[i] + '0');
	}
	free(binary);

	return (len);

}