#include "main.h"
#include <stdarg.h>

/**
 * print_integer - prints an integer
 * @ap: the pointer to the the integer
 *
 * Return: the number of digits printed
 */
char *print_integer(va_list ap)
{
	int k = va_arg(ap, int);

	return (to_str(k));
}

/**
 * int_to_str - converts int digits to string
 * @num: the number to convert
 * @str: the string to put the converted number
 * @cuf_ind: the current index. See it as the index of the digit
 * it should be noted that this function creates a reversed string
 * which need to be reversed to make sense.
/*/
void int_to_str(long num, char *str, int *cur_ind)
{

	str[(*cur_ind)] = (char)(num % 10 + '0');
	(*cur_ind)++;

	if (num / 10)
	{
		int_to_str(num / 10, str, cur_ind);
	}
}

/**
 * to_str - converts an integer to string
 * @num: the number
 *
 * Return: the number in string format
 */
char *to_str(long num)
{
	char *str = alloc_init(12);
	int ind = 0, negative = 0;

	if (num < 0)
	{
		negative = 1;
		num = -num;
	}

	int_to_str(num, str, &ind);

	if (negative)
	{
		str[ind] = '-';
		ind++;
	}

	str = reverse_string(str);
	return (str);
}
