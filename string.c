#include <stdarg.h>
#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints one chararcter
 * @c: is the character to be printed
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
/**
 * mystring - prints string.
 * @ptr: argument pointer
 * Return: number of strings printed
 */
int mystring(va_list ptr)
{
	int l = 0, k = 0;
	char *str;

	str = va_arg(ptr, char *);
	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
		l++;
	}
	if (str == NULL)
		str = ("null");
	return (l);
}

/**
 * printch - prints a character
 * @ptr: argument pointer
 * Return: number if character printed
 */
int printch(va_list ptr)
{
	int j = 0;
	char ch;

	ch = va_arg(ptr, int);
	_putchar(ch);
	j++;

	return (j);
}

/**
 * int_to_bin -converts unsigned int to binary
 * @ptr: argument pointer to arguments list
 * Return: number of items printed
 */
int int_to_bin(va_list ptr)
{
	unsigned int n = 0;
	int i = 0, j = 0;
	int binary[40];
	
	n = va_arg(ptr, unsigned int);

	while(n > 0)
	{
		binary[i] = (n % 2);
		n = n / 2;
		i++;
	}

	for(j = i - 1; j >= 0; j--)
	{
		_putchar('0' + binary[j]);
	}
	return (i);
}
