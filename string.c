#include <stdarg.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _putchar - prints one chararcter
 * @c: is the character to be printed
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
/**
 * print_string - prints string.
 * @ptr: argument pointer
 * Return: a string from ptr
 */
char *print_string(va_list ptr)
{
	char *temp_string, *str = malloc(100 * sizeof(char));
	int index;

	temp_string = va_arg(ptr, char *);
	for (index = 0; temp_string[index]; index++)
		str[index] = temp_string[index];

	return (str);
}

/**
 * printch - prints a character
 * @ptr: argument pointer
 * Return: number if character printed
 */
char *printch(va_list ptr)
{
	char ch;
	char *result = malloc(2 * sizeof(char));

	ch = va_arg(ptr, int);
	result[0] = ch;

	return (result);
}
