#include "main.h"
#include <stdarg.h>


/**
 * int_to_binary - converts unsigned int to binary
 * @list: is an argument pointer.
 *
 * Return: number of items printed
 */
int int_to_binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (0);
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	for (i = 0; rev_str[i] != '\0'; i++)
		_putchar(rev_str[i]);
	free(str);
	free(rev_str);
	return (len);
}
