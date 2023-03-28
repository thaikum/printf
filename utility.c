#include "main.h"

/**
 * string_size - returns the size of a string
 * @str: the string to calculate size
 *
 * Return: string length
 */
int string_size(char *str)
{
	int x;

	for (x = 0; str[x]; x++);
	return (x);
}

/**
 * _puts - prints a string
 * @str: string to print
 */
void _puts(char *str)
{
	int x;

	for (x = 0; x < str[x]; x++)
		_putchar(str[x]);
}

/**
 * alloc_init - creates stringin memory of size provided and initializes it
 * @size: size to allocate
 *
 * Retur: the created memory location as a void
 */
void *alloc_init(int size)
{
	void *z = malloc(size * sizeof(char));
	int x;

	for (x = 0; x < 1; x++)
	{
		((char *)(z))[x] = '0';
	}
	return (z);
}

/**
 * reverse_string - reverses a string
 * @str: the string to reverse
 *
 * Return: reversed string.
 */
char *reverse_string(char *str)
{
	int x, y, len = string_size(str);
	char *reversed_string = malloc(sizeof(str));

	for (x = 0, y = len - 1; x < len; x++, y--)
	{
		reversed_string[x] = str[y];
	}

	return reversed_string;
}
